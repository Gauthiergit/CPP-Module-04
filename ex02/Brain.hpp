/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:24:37 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 10:24:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

#define BLUE "\033[94m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class Brain
{
	protected:
	
	std::string* ideas;

	public:
	Brain();
	Brain(const std::string object);
	Brain(const Brain &copy);
	~Brain();

	Brain& operator=(const Brain &change);
	std::string getIdeas(int index) const;
	void		setIdeas(int index, const std::string& toy);
};

#endif