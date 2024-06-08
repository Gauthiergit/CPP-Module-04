/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:14:04 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 21:20:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain* brain;
	
	public:
	
	Dog();
	Dog(const Dog &copy);
	virtual ~Dog();

	Dog& operator=(const Dog &change);
	virtual void	makeSound() const;

	std::string	getBrain(int index) const;
	void 		setBrain(int index, const std::string& toy);
};

#endif