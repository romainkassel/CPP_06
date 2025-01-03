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

#ifndef __DATA_H__
#define __DATA_H__

#include <string>

struct	Data {

public:

	Data( void );
	~Data( void );

	void		setStatus( std::string status );
	std::string	getStatus( void ) const;

	void		setNumber( int number );
	int			getNumber( void ) const;

private:

	std::string	_status;
	int			_number;

};

#endif