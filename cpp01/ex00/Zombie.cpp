/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:38:43 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/15 19:11:57 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "No name";
	std::cout << "Default Constructor" << std::endl;
}

Zombie::Zombie(std::string name1)
{		
	std::cout << "Name Constructor" << std::endl;
	this->name = name1;
}

Zombie::~Zombie()
{	
	std::cout << this->name <<" Zombie Destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

