/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:13:07 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/11 17:05:40 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor  called"<< std::endl;
	this->name1= "Default";
	this->hitPoints= 100;
	this->attackDamage= 30;
	this->energyPoints= 100;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Name Constructor  called"<< std::endl;
	this->name1= name;
	this->hitPoints= 100;
	this->attackDamage= 30;
	this->energyPoints= 100;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap Copy Constructor  called"<< std::endl;
	*this=obj;
}

FragTrap &FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap Copy assignment operator called"<< std::endl;
	if(this!= &obj)
	{
		this->name1 = obj.name1;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->name1 << "is asking for highfive." <<std::endl;
}



FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;;
}