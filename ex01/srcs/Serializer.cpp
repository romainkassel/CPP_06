/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/27 07:48:47 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer( void )
{
	std::cout << "Default constructor (void) from Serializer called" << std::endl;
	return ;
}

Serializer::Serializer( Serializer const & src )
{
	std::cout << "Copy constructor from Serializer called" << std::endl;
	(void)src;
	return ;
}

Serializer::~Serializer( void )
{
	std::cout << "Destructor from Serializer called" << std::endl;
	return ;
}

Serializer  &Serializer::operator=( Serializer const & rhs )
{
	std::cout << "Affectation operator from Serializer called" << std::endl;
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	if (ptr == NULL)
		return (0);
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
