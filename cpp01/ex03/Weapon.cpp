/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:40:58 by smuhamma          #+#    #+#             */
/*   Updated: 2023/09/16 15:02:43 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "No_Type";
}

Weapon::Weapon(std::string Type_1)
{
	this->type = Type_1;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string Type_2)
{
	this->type = Type_2;
}

const std::string &Weapon::getType() const
{
	return type;
}
