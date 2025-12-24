/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:54:56 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/24 14:43:02 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("") {}

AMateria::AMateria(const AMateria &obj): _type(obj._type)
{}

AMateria::~AMateria(){}

AMateria    &AMateria::operator=(const AMateria &obj)
{
   (void)obj;
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

