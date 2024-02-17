/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:01:13 by smuhamma          #+#    #+#             */
/*   Updated: 2023/10/20 16:43:06 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor  called"<< std::endl;
	this->name1= "Default";
	this->hitPoints= 10;
	this->attackDamage= 0;
	this->energyPoints= 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name Constructor  called"<< std::endl;
	this->name1= name;
	this->hitPoints= 10;
	this->attackDamage= 0;
	this->energyPoints= 10;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy Constructor  called"<< std::endl;
	*this=obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	if(this!= &obj)
	{
		this->name1 = obj.name1;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->name1 << " attcks " << target << ", causing " << this->attackDamage << " points of damage!" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if((int) amount < 0)
	{
		std::cout << "Invalid damage value" <<std::endl;
		return;
	}
	if(this->hitPoints == 0 || this->hitPoints < (int) amount)
	{
		std::cout << "No enough hit points left" <<std::endl;
		return;
	}
	this->hitPoints = this->hitPoints - amount;
	std::cout << "ClapTrap " << this->name1 << " has hitPoints "<< this->hitPoints<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	this->hitPoints = this->hitPoints + amount;
	std::cout << "ClapTrap " << this->name1 << " after repair has hitPoints "<< this->hitPoints<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called"<< std::endl;
}