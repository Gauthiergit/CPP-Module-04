/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:52:55 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 13:52:55 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define BLUE "\033[94m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class ICharacter;

class AMateria
{
	protected:
	
	std::string	_type;

	public:

	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();

	AMateria& operator=(const AMateria &change);

	std::string const& getType() const;
	virtual void	setType(std::string const& type);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif