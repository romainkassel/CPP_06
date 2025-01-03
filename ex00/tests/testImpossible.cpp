/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testImpossible.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:57:37 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 04:53:31 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    testImpossible( void )
{   
    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35m**********************************************************************************************\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35mIMPOSSIBLE\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35mVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\033[0m" << std::endl;
	
	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"c\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("c");

    //////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'cc'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'cc'");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"a\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("a");

    //////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"'aa'\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("'aa'");
	
	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\".42f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert(".42f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42.f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"+.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("+.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42..0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42..0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42.0.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.0.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42f.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42f.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42f.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42f.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42.0ff\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.0ff");
    
    return ;
}