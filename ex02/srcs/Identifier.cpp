/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/27 07:48:47 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>

Identifier::Identifier( void )
{
	std::cout << "Default constructor (void) from Identifier called" << std::endl;
	return ;
}

Identifier::Identifier( Identifier const & src )
{
	std::cout << "Copy constructor from Identifier called" << std::endl;
	(void)src;
	return ;
}

Identifier::~Identifier( void )
{
	std::cout << "Destructor from Identifier called" << std::endl;
	std::cout << std::endl;
	return ;
}

Identifier  &Identifier::operator=( Identifier const & rhs )
{
	std::cout << "Affectation operator from Identifier called" << std::endl;
	(void)rhs;
	return (*this);
}

Base * Identifier::generate(void)
{
	std::srand(time(0));

	int	randomNumber = (rand() % 3) + 1;

	switch (randomNumber) {
		case 1:
			return (new A());
		break;
		case 2:
			return (new B());
		break;
		case 3:
			return (new C());
	}
	return (NULL);
}

void	Identifier::identify( Base* p )
{
	A	*a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}

	B	*b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}

	C	*c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}

	std::cerr << "Unrecognizable pointer" << std::endl;

	return ;
}

void Identifier::identify( Base& p )
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch ( std::exception & e )
	{
		try
		{
			B	&b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
			return ;
		}
		catch ( std::exception & e )
		{
			std::cout << "C" << std::endl;
		}
	}

	return ;

}
