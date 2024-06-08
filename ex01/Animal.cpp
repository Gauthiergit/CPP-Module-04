/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:18:32 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 16:40:15 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << GREEN << "Constructor Animal called" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << GREEN << "Destructor Animal called" << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal& Animal::operator=(const Animal &change)
{
	this->type = change.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << YELLOW << "Ougachaka" << RESET << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}