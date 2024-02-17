/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:38:52 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/03 14:44:55 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template< typename T >
class Array
{
	private:
		unsigned int array_size;
		T	*array;

	public:
		Array();
		Array(Array const &obj);
		Array &operator=(Array const &rhs);
		Array( unsigned int n);
		T &operator[](unsigned int n);
		~Array();
		unsigned int size() const;
};


# include "Array.tpp"


#endif