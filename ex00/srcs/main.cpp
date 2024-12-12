/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:58:28 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 16:49:34 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    const WrongAnimal* not_animal = new WrongAnimal();
    const WrongAnimal* not_a_cat = new WrongCat();

    std::cout << not_animal->getType() << " " << std::endl;
    std::cout << not_a_cat->getType() << " " << std::endl;
    not_animal->makeSound(); //will output the cat sound!
    not_a_cat->makeSound();

    delete not_animal;
    delete not_a_cat;

    return 0;
}