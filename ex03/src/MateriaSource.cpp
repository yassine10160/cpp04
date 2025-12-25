/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:47:38 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/25 22:11:04 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(): _currentSize(0) {}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	for (unsigned int i = 0; i < this->_currentSize; i++)
            delete this->_slots[i];
	this->_currentSize = obj._currentSize;
	for (unsigned int i = 0; i < obj._currentSize; i++)
		this->_slots[i] = obj._slots[i]->clone();
    return (*this);
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria *obj)
{
    if (this->_currentSize == 4)
	{
		std::cout<<"Can't copy, inventory is full"<<std::endl;
		return ;
	}
	if (obj->getType() == "ice")
		this->_slots[this->_currentSize] = new Ice();
	else
		this->_slots[this->_currentSize] = new Cure();
	this->_slots[this->_currentSize] = obj;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	(void)type;
	return nullptr;
}