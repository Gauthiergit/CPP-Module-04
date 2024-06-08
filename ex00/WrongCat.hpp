/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 09:34:26 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 09:34:26 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	
	WrongCat();
	WrongCat(const WrongCat &copy);
	virtual ~WrongCat();

	WrongCat& operator=(const WrongCat &change);
	virtual void	makeSound() const;
};

#endif