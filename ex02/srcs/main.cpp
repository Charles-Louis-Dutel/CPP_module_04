/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:58:28 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/03 14:46:50 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"


int	main(void)
{
	// const AAnimal	*test = new AAnimal();
	const AAnimal	*tab[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
		{
			tab[i] = new Dog();
			if (!tab[i])
			{
				std::cerr << "Error allocating a new dog" << std::endl;
				exit(1);
			}
		}
		else
		{
			tab[i] = new Cat();
			if (!tab[i])
			{
				std::cerr << "Error allocating a new cat" << std::endl;
				exit(1);
			}
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		tab[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		delete tab[i];
	}
	std::cout << std::endl << std::endl;


	/*Testing deep copy*/
	Dog	*idefix = new Dog();
	if (!idefix)
	{
		std::cerr << "Error allocating a new dog" << std::endl;
		exit(1);
	}
	Dog	*milou = new Dog(*idefix);
	if (!milou)
	{
		std::cerr << "Error allocating a new dog" << std::endl;
		exit(1);
	}
	std::cout << std::endl;

	std::cout << "Idefix ideas :" << std::endl;
	idefix->BrainIdeas();
	std::cout << std::endl;
	std::cout << "Milou ideas :" << std::endl;
	milou->BrainIdeas();
	std::cout << std::endl << std::endl;

	std::cout << "Changing Idefix ideas" << std::endl << std::endl;
	idefix->changeIdeas("new ideas");

	std::cout << "Idefix ideas :" << std::endl;
	idefix->BrainIdeas();
	std::cout << std::endl;
	std::cout << "Milou ideas :" << std::endl;
	milou->BrainIdeas();
	std::cout << std::endl << std::endl;

	delete idefix;
	delete milou;

	return (0);
}
