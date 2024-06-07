/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:23:39 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/07 15:42:02 by gpeyre           ###   ########.fr       */
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
	~Animal();

	Animal& operator=(const Animal &change);

	void		makeSound();
	std::string	getType() const;
};

#endif