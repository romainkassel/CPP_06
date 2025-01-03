/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/12/05 05:02:04 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Sources : 

o Table with min, max and lowest values : https://en.cppreference.com/w/cpp/types/numeric_limits (end of page)
o Converter from scientific to decimal notation : https://miniwebtool.com/scientific-notation-to-decimal-converter/
o Converter (2 directions) : https://www.calculator.io/fr/convertisseur-de-notation-scientifique/

*/

#include "ScalarConverter.hpp"
#include "Header.hpp"

int	main( void )
{
	testChar();
	std::cout << std::endl;
	
	testInt();
	std::cout << std::endl;

	testFloat();
	std::cout << std::endl;

	testDouble();
	std::cout << std::endl;

	testImpossible();
	std::cout << std::endl;

	testUtilsCopyByAffectation();
	testUtilsCopyByConstructor();
	
	return (0);
}
