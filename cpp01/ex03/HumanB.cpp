/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:40:49 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/16 15:38:34 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name_002)
{
	this->name = name_002;
}
HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << Weapon_B->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon1)
{
	this->Weapon_B = &Weapon1;
}

