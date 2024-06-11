/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:43:39 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 15:43:39 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << YELLOW << "---------------------------------------------------" << RESET << std::endl;

	me->use(4, *bob);
	me->unequip(1);
	me->unequip(1);
	me->unequip(4);

	delete tmp;
	delete bob;
	delete me;
	delete src;

	std::cout << YELLOW << "---------------------------------------------------" << RESET << std::endl;

	ICharacter* SpiderMan = new Character("Spider-Man");
	AMateria* ice = new Ice("ice");
	AMateria* cure = new Cure("cure");

	SpiderMan->equip(ice);
	SpiderMan->equip(ice);
	SpiderMan->equip(cure);
	SpiderMan->equip(NULL);
	SpiderMan->equip(cure);
	SpiderMan->equip(cure);

	delete SpiderMan;

	return (0);
}