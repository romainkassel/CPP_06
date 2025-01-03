/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:19:19 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 04:40:00 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterUtils.hpp"

ScalarConverterUtils::ScalarConverterUtils( std::string & literal ) :
_literal(literal),
_addDecPart(true),
_charOverflow(false),
_intOverflow(false),
_floatOverflow(false),
_floatInf(false)
{
	//std::cout << "Default constructor (std::string & literal) from ScalarConverterUtils called" << std::endl;
	this->_ss << literal;
	return ;
}

ScalarConverterUtils::ScalarConverterUtils( ScalarConverterUtils const & src ) : _literal(src._literal)
{
	//std::cout << "Copy constructor from ScalarConverterUtils called" << std::endl;
	
	*this = src;

	return ;
}

ScalarConverterUtils::~ScalarConverterUtils( void )
{
	//std::cout << "Destructor from ScalarConverterUtils called" << std::endl;
	return ;
}

ScalarConverterUtils  &ScalarConverterUtils::operator=( ScalarConverterUtils const & rhs )
{
	std::cout << "Affectation operator from ScalarConverterUtils called" << std::endl;
	
	this->_c = rhs._c;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_d = rhs._d;
	this->_addDecPart = rhs._addDecPart;
	this->_charOverflow = rhs._charOverflow;
	this->_intOverflow = rhs._intOverflow;
	this->_floatOverflow = rhs._floatOverflow;
	this->_floatInf = rhs._floatInf;
		
	return (*this);
}

void	ScalarConverterUtils::setChar( char c )
{
	this->_c = c;
	return ;
}
void	ScalarConverterUtils::setInt( int i )
{
	this->_i = i;
	return ;
}
void	ScalarConverterUtils::setFloat( float f )
{
	this->_f = f;
	return ;
}
void	ScalarConverterUtils::setDouble( double d )
{
	this->_d = d;
	return ;
}

bool	ScalarConverterUtils::checkExt( std::string literal )
{
	for (int i = literal.find('.') + 1; i < (int)literal.length() && literal[i] != 'f'; i++)
		if (literal[i] != '0')
			return (false);
	return (true);
}

void	ScalarConverterUtils::setAddDecPart( bool b )
{
	this->_addDecPart = b;
	return ;
}

void	ScalarConverterUtils::setCharOverflow( bool b )
{
	this->_charOverflow = b;
	return ;
}

void	ScalarConverterUtils::setIntOverflow( bool b )
{
	this->_intOverflow = b;
	return ;
}

void	ScalarConverterUtils::setFloatOverflow( bool b )
{
	this->_floatOverflow = b;
	return ;
}

void	ScalarConverterUtils::setFloatInf( bool b )
{
	this->_floatInf = b;
	return ;
}

char	ScalarConverterUtils::getChar( void ) const
{
	return (this->_c);
}

int		ScalarConverterUtils::getInt( void ) const
{
	return (this->_i);
}

float	ScalarConverterUtils::getFloat( void ) const
{
	return (this->_f);
}

double	ScalarConverterUtils::getDouble( void ) const
{
	return (this->_d);
}

std::string	ScalarConverterUtils::getLiteral( void ) const
{
	return (this->_literal);
}

bool	ScalarConverterUtils::getAddDecPart( void ) const
{
	return (this->_addDecPart);
}

bool	ScalarConverterUtils::getCharOverflow( void ) const
{
	return (this->_charOverflow);
}

bool	ScalarConverterUtils::getIntOverflow( void ) const
{
	return (this->_intOverflow);
}

bool	ScalarConverterUtils::getFloatOverflow( void ) const
{
	return (this->_floatOverflow);
}

bool	ScalarConverterUtils::getFloatInf( void ) const
{
	return (this->_floatInf);
}

void	ScalarConverterUtils::ssI( void )
{
	this->_ss >> this->_i;
	return ;
}

void	ScalarConverterUtils::ssF( void )
{
	this->_ss >> this->_f;
	return ;
}

void	ScalarConverterUtils::ssD( void )
{
	this->_ss >> this->_d;
	return ;
}

void	ScalarConverterUtils::displayImpossible( void ) const
{
	std::cout << "This is IMPOSSIBLE" << std::endl;
	std::cout << std::endl;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;

	throw "stop";
}

void	ScalarConverterUtils::displayFinal( void ) const
{
	std::cout << "char: ";
	if (this->_charOverflow == true)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(this->_c))
		std::cout << "'" << this->_c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (this->_intOverflow == false)
		std::cout << this->_i << std::endl;
	else
		std::cout << "impossible" << std::endl;

	std::cout << "float: ";
	if (this->_floatOverflow == true)
		std::cout << "impossible" << std::endl;
	else if (this->_floatInf == true)
	{
		if (this->_literal[0] != '-')
			std::cout << "+";
		std::cout << this->_f << "f" << std::endl;
	}
	else
	{
		std::cout << this->_f;
		if (this->_addDecPart == true && this->_f > std::numeric_limits<int>::min()
			&& this->_f < std::numeric_limits<int>::max())
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}

	std::cout << "double: " << this->_d;
	if (this->_addDecPart == true && this->_d > std::numeric_limits<int>::min()
		&& this->_d < std::numeric_limits<int>::max())
		std::cout << ".0";
	std::cout << std::endl;
		
	return ;
}	

std::ostream	&operator<<( std::ostream & o, ScalarConverterUtils const & rhs )
{
	o << "_literal: " << rhs.getLiteral() << std::endl;
	o << "_c: " << rhs.getChar() << std::endl;
	o << "_i: " << rhs.getInt() << std::endl;
	o << "_f: " << rhs.getFloat() << std::endl;
	o << "_d: " << rhs.getDouble() << std::endl;
	o << "_addDecPart: " << rhs.getAddDecPart() << std::endl;
	o << "_charOverflow: " << rhs.getCharOverflow() << std::endl;
	o << "_intOverflow: " << rhs.getIntOverflow() << std::endl;
	o << "_floatOverflow: " << rhs.getFloatOverflow() << std::endl;
	o << "_floatInf: " << rhs.getFloatInf() << std::endl;
	
	return (o);
}