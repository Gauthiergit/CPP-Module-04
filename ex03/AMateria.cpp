/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:53:35 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 15:53:35 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	std::cout  << GREEN << "Default constructor AMateria called" << RESET << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout  << GREEN << "Constructor with parameter AMateria called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout  << GREEN << "Destructor AMateria called" << RESET << std::endl;
}

AMateria& operator=(const AMateria &change)
{
	this->_type = change._type;
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

AMateria::AMateria* clone() const
{
	return (new AMateria(*this));
}

void AMateria::use(ICharacter& target)
{
	std::cout << YELLOW << target.getName << " do somthing" << std::endl;
}