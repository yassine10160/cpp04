/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:51:20 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/25 22:08:36 by yassinefahf      ###   ########.fr       */
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
     for (unsigned int i = 0; i < this->_currentSize; i++)
            delete this->_slots[i];
    this->_currentSize = obj._currentSize;
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
    for (unsigned int i = 0; i < this->_currentSize; i++)
            delete this->_slots[i];
}

std::string const &Character::getName() const
{
    return (this->_name);
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
    if (idx < 0 || idx > (int)this->_currentSize || this->_currentSize == 0)
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
