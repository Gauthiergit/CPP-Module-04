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

Brain::Brain()
{
	std::cout << GREEN << "Constructor Brain Called" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "Play";
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << GREEN << "Destructor Brain called" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain &change)
{
	this->ideas = change.ideas;
	return (*this);
}