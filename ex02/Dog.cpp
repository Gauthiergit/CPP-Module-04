/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:22:24 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 11:38:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << GREEN << "Constructor Dog called" << RESET << std::endl;
	this->type = "Dog";
	this->brain = new Brain("Ball");
}

Dog::~Dog()
{
	std::cout << GREEN << "Destructor Dog called" << RESET << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog &change)
{
	this->type = change.type;
	if (this != &change)
		this->brain = new Brain(*change.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "WOUAF!" << RESET << std::endl;
}

std::string	Dog::getBrain(int index) const
{
	return (this->brain->getIdeas(index));
}

void 		Dog::setBrain(int index, const std::string& toy)
{
	this->brain->setIdeas(index, toy);
}