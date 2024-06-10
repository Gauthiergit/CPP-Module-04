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
		inventory[i] = nullptr;
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << GREEN << "Constructor with parameter Character called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	std::cout << GREEN << "Destructor Character called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->iventory[i])
			delete this->inventory[i];
	}
}

Character& Character::operator=(const Character &change)
{
	this->_name = change._name;
	if (this->inventory != change.inventory)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->iventory[i])
				delete this->inventory[i];
			this->inventory[i] = new Character(*change.inventory[i]);
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
	while (this->inventory[i] != nullptr)
		i++;
	if (i == 4)
		std::cout << RED << "Character " << this->_name << " try to equip but there is no place." << RESET << std::endl;
	else
	{
		std::cout << BLUE << "Character " << this->_name << " equip himself with " <<
			m->getType() << RESET << std::endl;
		this->inventory[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "The index is not valid" << RESET << std::endl;
	else if (this->inventory[idx] == nullptr)
		std::cout << RED << "There is nothing to unequip at this index" << RESET << std::endl;
	else
	{
		std::cout << BLUE << "Character " << this->_name << " unequip " <<
			his->inventory[idx]->getType() << RESET << std::endl;
		AMateria *ptrmateria = this->inventory[idx];
		this->inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}
