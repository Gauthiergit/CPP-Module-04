/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:27:16 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:06:35 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &change)
{
	this->type = change.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meeeoowww" << std::endl;
}