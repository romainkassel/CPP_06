/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/12/05 09:34:03 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Identifier.hpp"
#include <iostream>

int	main( void )
{
	std::cout << std::endl;
	
	Identifier	identifier;
	Base		*ptr;

	std::cout << std::endl;
	
	ptr = identifier.generate();

	std::cout << std::endl;

	std::cout << "Actual type of the object pointed to by p: " << std::endl;
	
	std::cout << "POINTER * : ";
	identifier.identify(ptr);
	//identifier.identify(NULL);

	std::cout << "REFEREN & : ";
	identifier.identify(*ptr);
	//identifier.identify(NULL);

	//std::cout << "ID of generated object: " << ptr->i << std::endl;

	std::cout << std::endl;

	delete (ptr);

	std::cout << std::endl;

	return (0);
}
