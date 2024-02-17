/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:47:59 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/11 17:04:44 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor  called"<< std::endl;
	this->name1= "Default";
	this->hitPoints= 100;
	this->attackDamage= 20;
	this->energyPoints= 50;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name Constructor  called"<< std::endl;
	this->name1= name;
	this->hitPoints= 100;
	this->attackDamage= 20;
	this->energyPoints= 50;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy Constructor  called"<< std::endl;
	*this=obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy assignment operator called"<< std::endl;
	if(this!= &obj)
	{
		this->name1 = obj.name1;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->energyPoints == 0)
	{
		std::cout << "No energy points left" <<std::endl;
		return;
	}
	if(this->hitPoints == 0)
	{
		std::cout << "No hit points left" <<std::endl;
		return;
	}
	this->energyPoints = this->energyPoints - 1;
	std::cout << "ScavTrap " << this->name1 << " attcks " << target << ", causing " << this->attackDamage << " points of damage!" <<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name1 << " is now in Gatekeeper mode." <<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;;
}