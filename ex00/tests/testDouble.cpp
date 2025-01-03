/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testDouble.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:57:37 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 03:15:03 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    testDouble( void )
{   
    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m**********************************************************************************************\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32mDOUBLE\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32mVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\033[0m" << std::endl;
	
    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-4.2\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-4.2");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"4.2\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("4.2");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-inf\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-inf");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"+inf\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("+inf");

	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"nan\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("nan");
	
	//////////////////////
    
	std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"+42.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("+42.0");

    //////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-42.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-42.0");

    //////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"42.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"128.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("128.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"127.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("127.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"126.0\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("126.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"42.5678\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("42.5678");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"042.0000\")\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("042.0000");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-2147483648.0\") - INT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-2147483648.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"2147483647.0\") - INT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("2147483647.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-2147483649.0\") - OVERFLOW INT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-2147483649.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"2147483648.0\") - OVERFLOW INT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("2147483648.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0.0\") - CHAR_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"255.0\") - CHAR_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("255.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-1.0\") - OVERFLOW CHAR_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-1.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"256.0\") - OVERFLOW CHAR_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("256.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-179769000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0\") - DOUBLE_LOWEST\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-179769000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-1797690000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0\") -INF DOUBLE_LOWEST (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-1797690000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0");
	
	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"179769000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0\") - DOUBLE_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("179769000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"1797690000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0\") +INF DOUBLE_MAX (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("1797690000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000222507\") - DOUBLE_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000222507");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000222507\") - UNDERFLOW DOUBLE_MIN (one more 0 before last digits)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000222507");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-340282000000000000000000000000000000000.0\") - FLOAT_LOWEST\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-340282000000000000000000000000000000000.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"-3402820000000000000000000000000000000000.0\") -INF FLOAT_LOWEST (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("-3402820000000000000000000000000000000000.0");
	
	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"340282000000000000000000000000000000000.0\") - FLOAT_MAX\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("340282000000000000000000000000000000000.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"3402820000000000000000000000000000000000.0\") +INF FLOAT_MAX (one more 0)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("3402820000000000000000000000000000000000.0");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0.0000000000000000000000000000000000000117549\") - FLOAT_MIN\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.0000000000000000000000000000000000000117549");

	//////////////////////

    std::cout << std::endl;
	std::cout << "\033[0;32mScalarConverter::convert(\"0.00000000000000000000000000000000000000117549\") - UNDERFLOW FLOAT_MIN (one more 0 before last digits)\033[0m" << std::endl;
	std::cout << std::endl;
    
	ScalarConverter::convert("0.00000000000000000000000000000000000000117549");
    
    return ;
}