/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/27 07:48:47 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "ScalarConverterUtils.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

ScalarConverter::ScalarConverter( void )
{
	std::cout << "Default constructor (void) from ScalarConverter called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
	std::cout << "Copy constructor from ScalarConverter called" << std::endl;
	(void)src;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << "Destructor from ScalarConverter called" << std::endl;
	return ;
}

ScalarConverter  &ScalarConverter::operator=( ScalarConverter const & rhs )
{
	std::cout << "Affectation operator from ScalarConverter called" << std::endl;
	(void)rhs;
	return (*this);
}

void	ScalarConverter::convert( std::string literal )
{
	ScalarConverterUtils	Utils(literal);

	try
	{
		if (Utils.checkChar(literal) == true)
			Utils.manageChar();
		else if (Utils.checkInt(literal) == true)
			Utils.manageInt();
		else if (Utils.checkFloat(literal) == true)
			Utils.manageFloat();
		else if (Utils.checkDouble(literal) == true)
			Utils.manageDouble();
		else
			Utils.displayImpossible();
	}
	catch (char const* e)
	{
		return ;
	}

	Utils.displayFinal();

	return ;
}
