/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:39:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/08 10:10:55 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << "Cat sound: ";
	i->makeSound();
	std::cout << "Dog sound: ";
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	const WrongAnimal* a = new WrongCat();
	std::cout << a->getType() << std::endl;
	std::cout << "WrongCat sound: ";
	a->makeSound();
	delete a;
	return 0;
}