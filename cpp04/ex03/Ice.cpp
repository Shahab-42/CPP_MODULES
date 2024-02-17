/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:40:03 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 19:02:26 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() 
{
    type = "ice"; 
}

Ice::Ice(const Ice& other): AMateria(other)
{
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Ice::~Ice() 
{
}

Ice* Ice::clone() const 
{ 
    return new Ice(*this); 
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
