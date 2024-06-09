/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:44:45 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 14:44:45 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:

	Cure();
	Cure(std::string const& type);
	Cure(const Cure &copy);
	~Cure();

	Cure& operator=(const Cure &change);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif