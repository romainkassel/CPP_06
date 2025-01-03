/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testChar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:57:37 by debian            #+#    #+#             */
/*   Updated: 2024/12/04 06:52:07 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    testChar( void )
{   
    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35m**********************************************************************************************\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35mCHAR\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35mVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\033[0m" << std::endl;
	
    //////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'c'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'c'");

	 //////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'a'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'a'");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'z'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'z'");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'A'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'A'");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'Z'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'Z'");
    
    return ;
}