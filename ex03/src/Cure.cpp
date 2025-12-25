/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:29:39 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/25 21:32:38 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &obj): AMateria(obj._type) {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &obj)
{
    (void)obj;
    return (*this);
}

AMateria *Cure::clone() const
{
    Cure *clone = new Cure();
    clone->_type = this->_type;
    return (clone);
}

void Cure::use(ICharacter &target)
{
    std::cout<<"* heals "<<target.getName()<<"'s "<<"wounds *"<<std::endl;
}