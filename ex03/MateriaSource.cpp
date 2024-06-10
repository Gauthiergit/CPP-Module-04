/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:23:02 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/10 19:13:11 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << GREEN << "Default Constructor MateriaSource called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		stock[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << GREEN << "Destructor MateriaSource called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i])
			delete this->stock[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &change)
{
	if (this->stock != change.stock)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->stock[i])
				delete this->stock[i];
			this->stock[i] = (this->stock[i])->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (this->stock[i] != NULL)
		i++;
	if (i == 4)
		std::cout << RED << "MateriaSource can't learn about more AMateria." << RESET << std::endl;
	std::cout << BLUE << "MateriaSource learns about " << m->getType() << RESET << std::endl;
	this->stock[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < 4 && this->stock[i] != NULL && this->stock[i]->getType() != type)
		i++;
	if (i == 4 || this->stock[i] == NULL)
	{
		std::cout << RED << "Type " << type << " doesn't exist." << RESET << std::endl;
		return (NULL);
	}
	return ((this->stock[i])->clone());
}