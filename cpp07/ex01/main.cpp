/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:29:08 by smuhamma          #+#    #+#             */
/*   Updated: 2024/02/03 13:35:45 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int i[5] = {1, 2, 3, 4, 5};
	iter(i, 5, increment);
	for (int  z = 0; z < 5; z++)
	{
		std::cout << i[z]<< std::endl;
	}
	
	std::cout << "--------------------"<< std::endl;
	
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(c, 5, increment);
	for (int  z = 0; z < 5; z++)
	{
		std::cout << c[z]<< std::endl;
	}
	return (0);
}