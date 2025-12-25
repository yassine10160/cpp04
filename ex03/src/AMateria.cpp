/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:54:56 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/25 21:50:33 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(): _type("") {}

AMateria::AMateria(const AMateria &obj): _type(obj._type)
{}

AMateria::~AMateria(){}

AMateria    &AMateria::operator=(const AMateria &obj)
{
   if (this->_type == "")
    this->_type = obj._type;
    return (*this);
}

AMateria::AMateria(std::string const &type): _type(type)
{}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use(ICharacter &target)
{
    (void)(target);
}

