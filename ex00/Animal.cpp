/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 12:22:27 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/12/21 12:26:38 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"Animal Default constructor called"<<std::endl;
}

Animal::Animal(const Animal &other)
{
	this->_type = other._type;
}

Animal::~Animal()
{
	std::cout<<"Animal destructor called"<<std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return (*this);
}
