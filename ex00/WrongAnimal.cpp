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
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
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
	std::cout << "A WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
