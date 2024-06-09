/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:18:32 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 11:33:27 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << GREEN << "Constructor Animal called" << RESET << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << GREEN << "Destructor Animal called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}

AAnimal& AAnimal::operator=(const AAnimal &change)
{
	this->type = change.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << YELLOW << "Ougachaka" << RESET << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}