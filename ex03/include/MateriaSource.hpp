/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:44:43 by yafahfou          #+#    #+#             */
/*   Updated: 2025/12/25 18:12:36 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria    *_slots[4];
        unsigned int _currentSize;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        MateriaSource &operator=(const MateriaSource &obj);
        ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif