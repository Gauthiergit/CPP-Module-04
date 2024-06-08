/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:39:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 01:11:08 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
/* 	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << BLUE << "Type: " << RESET << j->getType() << std::endl;
	std::cout << BLUE << "Type: " << RESET << i->getType() << std::endl;
	std::cout << BLUE << "Cat type Animal sound: ";
	i->makeSound();
	std::cout << BLUE << "Dog type Animal sound: " << RESET;
	j->makeSound();
	std::cout << BLUE << "Animal type Animal sound: " << RESET;
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	const WrongAnimal* a = new WrongCat();
	const WrongCat* b = new WrongCat();
	std::cout << BLUE << "Type: " << RESET << a->getType() << std::endl;
	std::cout << BLUE << "Type: " << RESET << b->getType() << std::endl;
	std::cout << BLUE << "WrongCat type WrongAnimal sound: "<< RESET;
	a->makeSound();
	std::cout << BLUE << "WrongCat type WrongCat sound: " << RESET;
	b->makeSound();
	delete a;
	delete b;

	std::cout << std::endl; */
	Animal*	animals = new Animal[4];
	for (int i = 0; i < 2; i++)
		new(&animals[i]) Cat();
	for (int i = 2; i < 3; i++)
		new(&animals[i]) Dog();
	delete[] animals;

	std::cout << std::endl;
	Dog a;
	Dog b = a;
	a.setBrain(0, "Play with bones");
	
	std::cout << a.getBrain(0) << std::endl;
	std::cout << b.getBrain(0) << std::endl;
	return (0);
}