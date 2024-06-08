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

#define BLUE "\033[94m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class WrongAnimal
{
	protected:

	std::string type;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal &change);

	void	makeSound() const;
	std::string		getType() const;
};

#endif