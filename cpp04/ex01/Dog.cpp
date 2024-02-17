/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:21:21 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/12 13:24:52 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default Constructor called" <<std::endl;
}

Dog::Dog(const Dog& obj) :Animal(obj)
{
	*this=obj;
	std::cout << "Dog copy Constructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog& obj)
{
	if(this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain();
		this->brain->setIdeas(obj.brain->getIdeaas());
		
	}
	std::cout << "Dog copy assignment operator called" <<std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" <<std::endl;
	delete (this->brain);
}

void Dog::makeSound() const
{
	std::cout << "Dog makes sound wofwof" <<std::endl;
}

std::string Dog::getType()const
{
	return this->type;
}
Brain	*Dog::getBrain() const
{
	return (this->brain);	
}