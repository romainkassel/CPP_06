/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 04:35:05 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTERUTILS_H__
#define __SCALARCONVERTERUTILS_H__

#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

class	ScalarConverterUtils {

public:

	ScalarConverterUtils( std::string & literal );
	ScalarConverterUtils( ScalarConverterUtils const & src );
	~ScalarConverterUtils( void );

	ScalarConverterUtils	&operator=( ScalarConverterUtils const & rhs);

	void		setChar( char c );
	void		setInt( int i );
	void		setFloat( float f );
	void		setDouble( double d );

	void		setAddDecPart( bool b );

	void		setCharOverflow( bool b );
	void		setIntOverflow( bool b );
	void		setFloatOverflow( bool b );
	void		setFloatInf( bool b );

	bool		checkExt( std::string literal );

	std::string	getLiteral( void ) const;

	char		getChar( void ) const;
	int			getInt( void ) const;
	float		getFloat( void ) const;
	double		getDouble( void ) const;

	bool		getAddDecPart( void ) const;

	bool		getCharOverflow( void ) const;
	bool		getIntOverflow( void ) const;
	bool		getFloatOverflow( void ) const;
	bool		getFloatInf( void ) const;

	bool		checkChar( std::string literal );
	void		manageChar( void );

	bool		checkInt( std::string literal );
	void		manageInt( void );

	bool		checkFloat( std::string literal );
	void		manageFloat( void );
	void		displayInf( void );
	void		displayNan( void );

	bool		checkDouble( std::string literal );
	void		manageDouble( void );
	void		displayInff( void );
	void		displayNanf( void );

	void		ssI( void );
	void		ssF( void );
	void		ssD( void );
	void		ssLiteral( std::string literal );

	void		displayImpossible( void ) const;
	void		displayFinal( void ) const;

	void		checkInputOverflowInt( void );
	void		checkInputFloatInfUnderflow( void );

	void		checkInputDouble( void );
	void		checkInputDoubleInfUnderflow( void );

	void		checkInputFloatNan( void );
	void		checkInputDoubleNan( void );
	
	void		checkOverflowsFromInt( void );
	void		checkOverflowsFromFloat( void );
	void		checkOverflowsFromDouble( void );

private:

	const std::string	_literal;
	std::stringstream	_ss;
	
	char				_c;
	int					_i;
	float				_f;
	double				_d;
	
	bool				_addDecPart;
	
	bool				_charOverflow;
	bool				_intOverflow;
	bool				_floatOverflow;
	bool				_floatInf;

};

std::ostream	&operator<<( std::ostream & o, ScalarConverterUtils const & rhs );

#endif