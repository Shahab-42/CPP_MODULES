/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:40:06 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/12 13:23:57 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default Constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) 
{
	*this=obj;
	std::cout << "WrongAnimal copy Constructor called" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "WrongAnimal copy assignment operator called" <<std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" <<std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes sound wooooo" <<std::endl;
}

std::string WrongAnimal::getType()const
{
	return this->type;
}