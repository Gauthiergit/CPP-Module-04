/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:44:51 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:44:51 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << GREEN << "Constructor WrongCat called" << RESET << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << GREEN << "Destructor WrongCat called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &change)
{
	this->type = change.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << YELLOW << "Meeeoowww" << RESET << std::endl;
}