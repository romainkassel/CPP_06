/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/12/05 06:54:10 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main( void )
{
	//Serializer	serializer;

	std::cout << std::endl;
	
	Data		ptrInput;
	Data		*ptrOutput;
	uintptr_t	raw;

	std::cout << std::endl;
	
	ptrInput.setStatus("Here is my status");
	ptrInput.setNumber(42);
	
	std::cout << "ptrInput.status: " << ptrInput.getStatus() << std::endl;
	std::cout << "ptrInput.number: " << ptrInput.getNumber() << std::endl;

	std::cout << std::endl;
	
	raw = Serializer::serialize(&ptrInput);
	//raw = Serializer::serialize(NULL);
	ptrOutput = Serializer::deserialize(raw);

	if (ptrOutput)
	{
		std::cout << "ptrOutput->status: " << ptrOutput->getStatus() << std::endl;
		std::cout << "ptrOutput->number: " << ptrOutput->getNumber() << std::endl;
	}

	std::cout << std::endl;
	
	return (0);
}
