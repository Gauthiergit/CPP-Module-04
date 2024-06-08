/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:36:11 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 10:36:11 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas(new std::string[100])
{
	std::cout << GREEN << "Default Constructor Brain Called" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "Play";
}

Brain::Brain(const std::string object) : ideas(new std::string[100])
{
	std::cout << GREEN << "Constructor Brain with parameters Called" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "Play with "+object;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << GREEN << "Destructor Brain called" << RESET << std::endl;
	delete[] ideas;
}

Brain& Brain::operator=(const Brain &change)
{
	// delete[] ideas;
	ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		this->ideas[i] = change.ideas[i];
	return (*this);
}

std::string Brain::getIdeas(int index) const
{
	return (this->ideas[index]);
}
void		Brain::setIdeas(int index, const std::string& toy)
{
	this->ideas[index] = toy;
}