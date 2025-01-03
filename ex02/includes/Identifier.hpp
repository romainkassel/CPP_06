/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/12/05 09:29:39 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IDENTIFIER_H__
#define __IDENTIFIER_H__

#include "Base.hpp"

class	Identifier {

public:

	Identifier( void );
	~Identifier( void );
	Identifier( Identifier const & src );

	Identifier	&operator=( Identifier const & rhs );

	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);

};

#endif