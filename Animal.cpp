/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:18:32 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/07 15:43:06 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal& Animal::operator=(const Animal &change)
{
	this->type = change.type;
}

void	Animal::makeSound()
{
	std::cout << "An animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}