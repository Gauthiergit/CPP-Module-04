/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:23:39 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:57:57 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

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