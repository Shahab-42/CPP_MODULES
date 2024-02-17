/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:39:40 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 19:01:58 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() 
{ 
    type = "cure"; 
}

Cure::Cure(const Cure& other): AMateria(other)
{
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{ 
     return new Cure(*this); 
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
