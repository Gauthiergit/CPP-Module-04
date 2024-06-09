/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:35:37 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 16:35:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria(), _type("")
{
	std::cout  << GREEN << "Default constructor Ice called" << RESET << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type), _type(type)
{
	std::cout  << GREEN << "Constructor with parameter Ice called" << RESET << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	*this = copy;
}

Ice::~Ice()
{
	std::cout  << GREEN << "Destructor Ice called" << RESET << std::endl;
}

Ice& operator=(const Ice &change)
{
	this->_type = change._type;
}

Ice::Ice* clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << YELLOW << "Shoots an ice bolt at " << target.getName << std::endl;
}