/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testInt.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:57:37 by debian            #+#    #+#             */
/*   Updated: 2024/12/04 06:57:21 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    testInt( void )
{   
    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m**********************************************************************************************\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32mINT\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32mVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\033[0m" << std::endl;
	
	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-42\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-42");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"42\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42");
	
    //////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"+42\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("+42");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"128\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("128");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"127\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("127");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"126\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("126");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-2147483648\") - INT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-2147483648");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"2147483647\") - INT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("2147483647");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-2147483649\") - OVERFLOW INT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-2147483649");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"2147483648\") - OVERFLOW INT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("2147483648");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0\") - CHAR_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"255\") - CHAR_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("255");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-1\") - OVERFLOW CHAR_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-1");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"256\") - OVERFLOW CHAR_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("256");

    return ;
}