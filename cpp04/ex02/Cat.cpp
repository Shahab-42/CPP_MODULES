/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:18:08 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 17:21:36 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default Constructor called" <<std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	*this=obj;
	std::cout << "Cat copy Constructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain();
		this->brain->setIdeas(obj.brain->getIdeaas());		
	}
	std::cout << "Cat copy assignment operator called" <<std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" <<std::endl;
	delete this->brain;
}
void Cat::makeSound() const
{
	std::cout << "Cat makes sound meows" <<std::endl;
}

std::string Cat::getType()const
{
	return this->type;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);	
}