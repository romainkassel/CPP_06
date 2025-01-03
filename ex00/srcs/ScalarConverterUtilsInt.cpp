/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtilsInt.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:19:19 by debian            #+#    #+#             */
/*   Updated: 2024/12/06 18:36:49 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterUtils.hpp"

bool	ScalarConverterUtils::checkInt( std::string literal )
{
	if (literal[0] != '-' && literal[0] != '+' && std::isdigit(literal[0]) == 0)
		return (false);

	for (int i = 1; i < (int)literal.length(); i++)
	{
		if (std::isdigit(literal[i]) == 0)
			return (false);
	}

	return (true);
}

void	ScalarConverterUtils::checkInputOverflowInt( void )
{
	std::stringstream	ss;
	long int			li;

	ss << this->_literal;
	ss >> li;

	if (li < std::numeric_limits<int>::min() || li > std::numeric_limits<int>::max())
	{
		this->displayImpossible();
		throw "stop";
	}
	
	return ;
}

void	ScalarConverterUtils::checkOverflowsFromInt( void )
{
	if (this->_i < std::numeric_limits<unsigned char>::min() || this->_i > std::numeric_limits<unsigned char>::max())
		this->_charOverflow = true;
	
	return ;
}

void	ScalarConverterUtils::manageInt( void )
{
	std::cout << "This is an INT" << std::endl;
	std::cout << std::endl;

	this->checkInputOverflowInt();

	this->ssI();

	this->checkOverflowsFromInt();

	if (this->_charOverflow == false)
		this->_c = static_cast<char>(this->_i);
	this->_f = static_cast<float>(this->_i);
	this->_d = static_cast<double>(this->_i);

	return ;
}