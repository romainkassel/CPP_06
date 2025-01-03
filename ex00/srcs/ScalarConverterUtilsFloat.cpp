/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtilsFloat.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:19:19 by debian            #+#    #+#             */
/*   Updated: 2024/12/06 18:36:38 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterUtils.hpp"

bool	ScalarConverterUtils::checkFloat( std::string literal )
{
	if (literal.compare("+inff") == 0 || literal.compare("-inff") == 0 || literal.compare("nanf") == 0)
		return (true);

	if (literal[0] != '-' && literal[0] != '+' && std::isdigit(literal[0]) == 0)
		return (false);

	for (int i = 1; i < (int)literal.length(); i++)
	{
		if (std::isdigit(literal[i]) == 0 && literal[i] != '.' && literal[i] != 'f')
			return (false);
	}

	if (literal.find_first_of('.') != literal.find_last_of('.') || literal.find('.') > literal.length())
		return (false);

	if ((literal[0] == '-' || literal[0] == '+') && literal.find('.') == 1)
		return (false);

	if (literal.find('f') != (literal.length() - 1))
		return (false);

	if (literal.find('.') == (literal.length() - 2))
		return (false);

	return (true);
}

void	ScalarConverterUtils::displayInff( void )
{
	this->_f = std::numeric_limits<float>::infinity();
	this->_d = static_cast<double>(this->_f);

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

void	ScalarConverterUtils::displayNanf( void )
{
	this->_f = 0.0f / 0.0f;
	this->_d = static_cast<double>(this->_f);

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << this->_f << "f" << std::endl;
	std::cout << "double: " << this->_d << std::endl;

	return ;
}

void	ScalarConverterUtils::checkInputFloatInfUnderflow( void )
{
	std::stringstream	ss;
	double				d;

	ss << this->_literal;
	ss >> d;

	// Check Inf

	if (this->_literal.compare("+inff") == 0 || this->_literal.compare("-inff") == 0
		|| std::isinf(static_cast<float>(d)) == true)
	{
		this->displayInff();
		throw "stop";
	}

	// Check Underflow

	if (d < 1.17549e-38 && d > 0)
	{
		this->displayImpossible();
		throw "stop";
	}
	
	return ;
}

void	ScalarConverterUtils::checkInputFloatNan( void )
{
	if (this->_literal.compare("nanf") == 0
		|| std::isnan(static_cast<float>(this->_f)) == true)
	{
		this->displayNan();
		throw "stop";
	}
	
	return ;
}

void	ScalarConverterUtils::checkOverflowsFromFloat( void )
{
	if (this->_f < std::numeric_limits<unsigned char>::min() || this->_f > std::numeric_limits<unsigned char>::max())
		this->_charOverflow = true;

	if (this->_f < std::numeric_limits<int>::min() || this->_f > std::numeric_limits<int>::max())
		this->_intOverflow = true;
	
	return ;
}

void	ScalarConverterUtils::manageFloat( void )
{
	std::cout << "This is a FLOAT" << std::endl;
	std::cout << std::endl;

	this->checkInputFloatInfUnderflow();
	this->ssF();
	this->checkInputFloatNan();

	this->checkOverflowsFromFloat();

	if (this->_charOverflow == false)
		this->_c = static_cast<char>(this->_f);
	if (this->_intOverflow == false)
		this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);

	if (checkExt(this->_literal) == false)
		this->_addDecPart = false;
	
	return ;
}