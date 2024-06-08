/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:14:04 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:58:15 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	
	Dog();
	Dog(const Dog &copy);
	virtual ~Dog();

	Dog& operator=(const Dog &change);
	virtual void	makeSound() const;
};

#endif