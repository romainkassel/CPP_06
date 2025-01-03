/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/12/03 05:41:21 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H__
#define __SCALARCONVERTER_H__

#include <string>

class	ScalarConverter {

public:

	ScalarConverter( ScalarConverter const & src );
	~ScalarConverter( void );

	ScalarConverter	&operator=( ScalarConverter const & rhs);

	static void	convert( std::string literal );

private:

	ScalarConverter( void );

};

#endif