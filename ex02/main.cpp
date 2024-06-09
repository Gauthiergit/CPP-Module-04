/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:39:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/06/09 11:49:18 by gpeyre           ###   ########.fr       */
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
	// const AAnimal* k = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << BLUE << "Type: " << RESET << j->getType() << std::endl;
	std::cout << BLUE << "Type: " << RESET << i->getType() << std::endl;
	std::cout << BLUE << "Cat type Animal sound: ";
	i->makeSound();
	std::cout << BLUE << "Dog type Animal sound: " << RESET;
	j->makeSound();
	delete j;
	delete i;

	std::cout << YELLOW << "-------------------------------------------------------------------" << RESET << std::endl;
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

	std::cout << YELLOW << "-------------------------------------------------------------------" << RESET << std::endl;
	AAnimal*	animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Cat();	
	for (int i = 2; i < 4; i++)
		animals[i] = new Dog();
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();
	
	std::cout << YELLOW << "-------------------------------------------------------------------" << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << dynamic_cast<Dog*>(animals[3])->getBrain(i) << std::endl;

	std::cout << YELLOW << "-------------------------------------------------------------------" << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << dynamic_cast<Cat*>(animals[0])->getBrain(i) << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << YELLOW << "-------------------------------------------------------------------" << RESET << std::endl;
	Dog c;
	Dog d = c;
	c.setBrain(0, "Play with bones");
	
	std::cout << c.getBrain(0) << std::endl;
	std::cout << d.getBrain(0) << std::endl;
	return (0);
}