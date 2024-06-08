/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:23:39 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 16:36:49 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define BLUE "\033[94m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class Animal
{
	protected:
	
	std::string type;

	public:
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();

	Animal& operator=(const Animal &change);

	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif