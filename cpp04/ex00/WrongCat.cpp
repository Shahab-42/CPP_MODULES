/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:38:45 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 16:38:46 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default Constructor called" <<std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) :WrongAnimal(obj)
{
	*this=obj;
	std::cout << "WrongCat copy Constructor called" <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		
	}
	std::cout << "WrongCat copy assignment operator called" <<std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" <<std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes sound meows" <<std::endl;
}

std::string WrongCat::getType()const
{
	return this->type;
}