/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:40:43 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 19:00:53 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
    for(int i = 0; i < MAX_MATERIAS; i++) 
        templates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other) : idx(other.idx)
{
    for(int i = 0; i < MAX_MATERIAS; i++)
    {
        if(other.templates[i]) 
            templates[i] = other.templates[i]->clone();
        else
            templates[i] = NULL;
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
    if(this != &other)
    {
        idx = other.idx;
        for(int i = 0; i < MAX_MATERIAS; i++)
        {
            if(templates[i]) 
                delete templates[i];
            if(other.templates[i]) 
                templates[i] = other.templates[i]->clone();
            else
                templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (templates[i]) {
            delete templates[i];
            templates[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if(idx < MAX_MATERIAS && m)
    {
        this->templates[idx++] = m;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < this->idx; i++)
        if(this->templates[i] && this->templates[i]->getType() == type)
            return this->templates[i]->clone();
    return NULL;
}
