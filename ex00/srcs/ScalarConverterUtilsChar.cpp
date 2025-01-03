/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtilsChar.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:19:19 by debian            #+#    #+#             */
/*   Updated: 2024/12/04 03:48:59 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterUtils.hpp"

bool	ScalarConverterUtils::checkChar( std::string literal )
{
	if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
		return (true);
	return (false);
}

void	ScalarConverterUtils::manageChar( void )
{
	this->_c = this->_literal[1];

	std::cout << "This is a CHAR" << std::endl;
	std::cout << std::endl;

	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);

	return ;
}