/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:41:48 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 14:41:48 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	
	Ice();
	Ice(std::string const& type);
	Ice(const Ice &copy);
	~Ice();

	Ice& operator=(const Ice &change);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif