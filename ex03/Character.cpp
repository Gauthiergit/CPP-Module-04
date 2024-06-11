/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:43:51 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/10 10:43:51 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	std::cout << GREEN << "Default Constructor Character called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << GREEN << "Constructor Character " << BLUE << name << GREEN << " called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == "cure")
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
			break ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == "ice")
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
			break ;
		}
	}
	std::cout << GREEN << "Destructor Character called" << RESET << std::endl;
}

Character& Character::operator=(const Character &change)
{
	this->_name = change._name;
	if (this != &change)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
			if (change.inventory[i])
				this->inventory[i] = change.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->inventory[i] != NULL)
		i++;
	if (i == 4)
		std::cout << RED << "Character " << this->_name << " try to equip but there is no place." << RESET << std::endl;
	else if (m == NULL)
		std::cout << RED << "There is nothing to equip" << RESET << std::endl;
	else
	{
		std::cout << BLUE << "Character " << this->_name << " equips himself with " <<
			m->getType() << " at the index " << i << RESET << std::endl;
		this->inventory[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		std::cout << RED << "There is nothing to unequip at the index " << idx << RESET << std::endl;
	else
	{
		AMateria **ptrmateria = &this->inventory[idx];
		(void)(*ptrmateria);
		std::cout << BLUE << "Character " << this->_name << " unequips " <<
			this->inventory[idx]->getType() << " from index " << idx << RESET << std::endl;
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		std::cout << RED << "There is nothing to use at the index " << idx << RESET << std::endl;
	else 
		this->inventory[idx]->use(target);
}
