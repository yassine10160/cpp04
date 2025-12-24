/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:47:38 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/24 18:51:02 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    (void)obj;
    return (*this);
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria *obj)
{
    
}