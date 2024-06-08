/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:16:42 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 17:01:31 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain* brain;

	public:
	
	Cat();
	Cat(const Cat &copy);
	virtual ~Cat();

	Cat& operator=(const Cat &change);
	virtual void	makeSound() const;
};

#endif