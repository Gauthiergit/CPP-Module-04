/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:39:36 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:39:36 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << GREEN << "Constructor WrongAnimal called" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << GREEN << "Destructor WrongAnimal called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &change)
{
	this->type = change.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << YELLOW << "Ougachaka" << RESET << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
