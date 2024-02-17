/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:28:24 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/16 13:01:34 by smuhamma         ###   ########.fr       */
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

void Zombie::setName(std::string name1)
{
	this->name = name1;
}
