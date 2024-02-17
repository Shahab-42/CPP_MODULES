/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:16:12 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/03 13:35:09 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void increment(T  &element)
{
	element += 1;
}

template <typename T>
void iter(T *array, int len, void(*x)(T  &element) )
{
	for (int i = 0; i < len; i++)
	{
		x(array[i]);
	}
}


#endif