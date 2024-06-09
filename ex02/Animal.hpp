/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:23:39 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 11:55:11 by gpeyre           ###   ########.fr       */
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

class AAnimal
{
	protected:
	
	std::string type;

	public:
	AAnimal();
	AAnimal(const AAnimal &copy);
	virtual ~AAnimal();

	AAnimal& operator=(const AAnimal &change);

	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif