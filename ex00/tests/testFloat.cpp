/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFloat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:57:37 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 03:49:17 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    testFloat( void )
{   
    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35m**********************************************************************************************\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35mFLOAT\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;35mVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\033[0m" << std::endl;
	
    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"0.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0f");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-4.2f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-4.2f");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"4.2f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("4.2f");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-inff\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-inff");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"+inff\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("+inff");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"nanf\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("nanf");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"4577778888.998888888777666665555555555555f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("4577778888.998888888777666665555555555555f");
	
	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"+42.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("+42.0f");

    //////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-42.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-42.0f");

    //////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"128.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("128.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"127.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("127.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"126.0f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("126.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"42.5678f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.5678f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"042.0000f\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("042.0000f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-2147483648.0f\") - INT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-2147483648.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"2147483647.0f\") - INT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("2147483647.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-21474836480.0f\") - OVERFLOW INT_MIN (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-21474836480.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"21474836470.0f\") - OVERFLOW INT_MAX (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("21474836470.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"0.0f\") - CHAR_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"255.0f\") - CHAR_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("255.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-1.0f\") - OVERFLOW CHAR_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-1.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"256.0f\") - OVERFLOW CHAR_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("256.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-340282000000000000000000000000000000000.0f\") - FLOAT_LOWEST\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-340282000000000000000000000000000000000.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"-3402820000000000000000000000000000000000.0f\") -INF FLOAT_LOWEST (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-3402820000000000000000000000000000000000.0f");
	
	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"340282000000000000000000000000000000000.0f\") - FLOAT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("340282000000000000000000000000000000000.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"3402820000000000000000000000000000000000.0f\") +INF FLOAT_MAX (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("3402820000000000000000000000000000000000.0f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"0.0000000000000000000000000000000000000117549f\") - FLOAT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0000000000000000000000000000000000000117549f");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;35mScalarConverter::convert(\"0.00000000000000000000000000000000000000117549f\") - UNDERFLOW FLOAT_MIN (one more 0 before last digits)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.00000000000000000000000000000000000000117549f");
    
    return ;
}