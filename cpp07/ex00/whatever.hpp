/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:37:32 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/03 12:46:08 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T x = a;
	a = b;
	b = x;
}

template <typename T>
T	min(T &a, T &b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

template <typename T>
T	max(T &a, T &b)
{
	if(a < b)
		return(b);
	else
		return(a);
}
#endif