/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:28:21 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/16 13:09:06 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if(N < 0)
		return(NULL);
	Zombie *obj = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		obj[i].setName(name);
		obj[i].announce();
	}
	return(obj);
	
}