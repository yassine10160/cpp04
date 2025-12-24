/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:51:20 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/24 18:36:34 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(): _name(""),  _currentSize(0) {}

Character::Character(std::string name): _name(name) {}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character   &Character::operator=(const Character &obj)
{
    delete[] (this->_slots);
    for (unsigned int i = 0; i < obj._currentSize; i++)
    {
        if (obj._slots[i]->getType() == "ice")
            this->_slots[i] = new Ice();
        else
            this->_slots[i] = new Cure();
    }
    return (*this);
}

Character::~Character()
{
    delete[] (this->_slots);
}

std::string const &Character::getName() const
{
    return (this->getName());
}

void Character::equip(AMateria *m)
{
    if (this->_currentSize == 4)
    {
        std::cout<<"Sorry, inventory is full !"<<std::endl;
        return ;
    }
    if (m->getType() == "ice")
        this->_slots[this->_currentSize] = new Ice();
    else
         this->_slots[this->_currentSize] = new Cure();
    this->_currentSize++;
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx > this->_currentSize || this->_currentSize == 0)
    {
        std::cout<<"Nothing to unequip !"<<std::endl;
        return ;
    }
    this->_slots[idx] = 0;
    this->_currentSize--;
}

void     Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
        this->_slots[idx]->use(target);
}
