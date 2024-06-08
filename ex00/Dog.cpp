/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:22:24 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 16:41:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << GREEN << "Constructor Dog called" << RESET << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << GREEN << "Destructor Dog called" << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog &change)
{
	this->type = change.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "WOUAF!" << RESET << std::endl;
}