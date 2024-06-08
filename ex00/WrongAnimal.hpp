/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:38:09 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:38:09 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:

	std::string type;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal &change);

	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif