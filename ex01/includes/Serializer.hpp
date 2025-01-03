/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/12/03 05:41:21 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H__
#define __SERIALIZER_H__

#include <string>
#include "Data.hpp"
#include <stdint.h>

class	Serializer {

public:

	Serializer( Serializer const & src );
	~Serializer( void );

	Serializer			&operator=( Serializer const & rhs);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

private:

	Serializer( void );

};

#endif