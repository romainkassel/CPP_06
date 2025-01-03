/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtilsDouble.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:19:19 by debian            #+#    #+#             */
/*   Updated: 2024/12/06 18:36:24 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterUtils.hpp"

bool	ScalarConverterUtils::checkDouble( std::string literal )
{
	if (literal.compare("+inf") == 0 || literal.compare("-inf") == 0 || literal.compare("nan") == 0)
		return (true);

	if (literal[0] != '-' && literal[0] != '+' && std::isdigit(literal[0]) == 0)
		return (false);

	for (int i = 1; i < (int)literal.length(); i++)
	{
		if (std::isdigit(literal[i]) == 0 && literal[i] != '.')
			return (false);
	}

	if (literal.find_first_of('.') != literal.find_last_of('.') || literal.find('.') > literal.length())
		return (false);

	if ((literal[0] == '-' || literal[0] == '+') && literal.find('.') == 1)
		return (false);

	if (literal.find('.') == (literal.length() - 1))
		return (false);

	return (true);
}

void	ScalarConverterUtils::displayInf( void )
{
	this->_d = std::numeric_limits<double>::infinity();
	this->_f = static_cast<float>(this->_d);

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	
	std::cout << "float: ";
	if (this->_literal[0] == '-')
		std::cout << "-";
	else
		std::cout << "+";
	std::cout << this->_f << "f" << std::endl;
	
	std::cout << "double: ";
	if (this->_literal[0] == '-')
		std::cout << "-";
	else
		std::cout << "+";
	std::cout << this->_d << std::endl;
	
	return ;
}

void	ScalarConverterUtils::displayNan( void )
{
	this->_d = 0.0 / 0.0;
	this->_f = static_cast<float>(this->_d);

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << this->_f << "f" << std::endl;
	std::cout << "double: " << this->_d << std::endl;

	return ;
}

void	ScalarConverterUtils::checkInputDoubleInfUnderflow( void )
{
	std::stringstream	ss;
	long double			ld;

	ss << this->_literal;
	ss >> ld;

	// Check Inf

	if (this->_literal.compare("+inf") == 0 || this->_literal.compare("-inf") == 0
		|| std::isinf(static_cast<double>(ld)) == true)
	{
		this->displayInf();
		throw "stop";
	}

	// Check Underflow

	if (ld < 2.22507e-308 && ld > 0)
	{
		this->displayImpossible();
		throw "stop";
	}

	return ;
}

void	ScalarConverterUtils::checkInputDoubleNan( void )
{
	if (this->_literal.compare("nan") == 0
		|| std::isnan(static_cast<double>(this->_d)) == true)
	{
		this->displayNan();
		throw "stop";
	}
	
	return ;
}

void	ScalarConverterUtils::checkOverflowsFromDouble( void )
{
	if (this->_d < std::numeric_limits<unsigned char>::min() || this->_d > std::numeric_limits<unsigned char>::max())
		this->_charOverflow = true;

	if (this->_d < std::numeric_limits<int>::min() || this->_d > std::numeric_limits<int>::max())
		this->_intOverflow = true;

	if (std::isinf(static_cast<float>(this->_d)) == true)
		this->_floatInf = true;

	if (this->_d < 1.17549e-38 && this->_d > 0)
		this->_floatOverflow = true;
	
	return ;
}

void	ScalarConverterUtils::manageDouble( void )
{
	std::cout << "This is a DOUBLE" << std::endl;
	std::cout << std::endl;

	this->checkInputDoubleInfUnderflow();
	this->ssD();
	this->checkInputDoubleNan();
	this->checkOverflowsFromDouble();

	if (this->_charOverflow == false)
		this->_c = static_cast<char>(this->_d);
	if (this->_intOverflow == false)
		this->_i = static_cast<int>(this->_d);
	this->_f = static_cast<float>(this->_d);

	if (this->checkExt(this->_literal) == false)
		this->_addDecPart = false;

	return ;
}