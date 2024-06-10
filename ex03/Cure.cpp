/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:24:34 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 16:24:34 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout  << GREEN << "Default constructor Cure called" << RESET << std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type)
{
	std::cout  << GREEN << "Constructor with parameter Cure called" << RESET << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	*this = copy;
}

Cure::~Cure()
{
	std::cout  << GREEN << "Destructor Cure called" << RESET << std::endl;
}

Cure& Cure::operator=(const Cure &change)
{
	this->_type = change._type;
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << YELLOW << "Heals " << BLUE << target.getName() << YELLOW << "'s wounds" << std::endl;
}