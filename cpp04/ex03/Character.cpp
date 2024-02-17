/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:39:14 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 19:01:22 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
}

Character::Character(Character const & other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
    {
        if(other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
}

Character::~Character()
{
    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (_inventory[i]) delete (_inventory[i]);
    }
}


Character & Character::operator=(Character const & other)
{
    if (this == &other)
        return *this;

    _name = other._name;

    for (int i = 0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];

        if(other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
    return *this;
}

std::string const & Character::getName() const { return _name; }

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i] && m)
        {
            _inventory[i] = m->clone();
            return;
        }
    }
}

AMateria* Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
        return NULL;

    AMateria* tmp = _inventory[idx]->clone();
    delete _inventory[idx];
    _inventory[idx] = NULL;
    return tmp;
}


void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx]->use(target);
}
