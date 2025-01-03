/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:15 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/27 07:48:47 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data( void )
{
	std::cout << "Default constructor (void) from Data called" << std::endl;
	return ;
}

Data::~Data( void )
{
	std::cout << "Destructor from Data called" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Data::setStatus( std::string status )
{
	this->_status = status;
	return ;
}

std::string	Data::getStatus( void ) const
{
	return (this->_status);
}

void	Data::setNumber( int number )
{
	this->_number = number;
	return ;
}

int	Data::getNumber( void ) const
{
	return (this->_number);
}
