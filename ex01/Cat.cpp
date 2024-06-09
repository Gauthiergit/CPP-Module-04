/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:27:16 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 10:57:16 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << GREEN << "Constructor Cat called" << RESET << std::endl;
	this->type = "Cat";
	this->brain = new Brain("Rope");
}

Cat::~Cat()
{
	std::cout << GREEN << "Destructor Cat called" << RESET << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &change)
{
	this->type = change.type;
	this->brain = new Brain(*change.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Meeeoowww" << RESET << std::endl;
}

std::string	Cat::getBrain(int index) const
{
	return (this->brain->getIdeas(index));
}

void 		Cat::setBrain(int index, const std::string& toy)
{
	this->brain->setIdeas(index, toy);
}