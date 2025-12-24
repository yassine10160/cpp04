/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:06:20 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/24 14:37:29 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice &obj): AMateria(obj._type) {}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &obj)
{
    this->_type = obj._type;
    return (*this);
}

AMateria *Ice::clone() const
{
    Ice *clone = new Ice();
    clone->_type = this->_type;
    return (clone);
}

void    Ice::use(ICharacter &target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}

