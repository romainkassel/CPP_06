/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testUtilsCopyByConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 03:43:51 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Header.hpp"

void	testCopyByConstructor(ScalarConverterUtils utils1)
{
	std::cout << std::endl;
	
	// Display of utils1 attributes

    std::cout << utils1 << std::endl;
	
	return ;
}

void    testUtilsCopyByConstructor() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test utils copy by constructor" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;

	// Creation of 1 utils instance (one that will be copied)
    
	std::string s1 = "42";
	ScalarConverterUtils	utils1( s1 );
	std::cout << std::endl;

	// Filling utils1 attributes

	utils1.setChar('b');
	utils1.setInt(42);
	utils1.setFloat(42.42f);
	utils1.setDouble(42.42);
	utils1.setCharOverflow(true);
	utils1.setIntOverflow(true);
	utils1.setFloatOverflow(true);
	utils1.setFloatInf(true);

    // Display of utils1 attributes

    std::cout << utils1 << std::endl;

    // Call of copy by constructor

	testCopyByConstructor(utils1);
    
    return ;
}