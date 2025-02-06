/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:20:45 by cdutel            #+#    #+#             */
/*   Updated: 2025/02/06 10:53:01 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }

int main()
{
	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	std::cout << std::endl;

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("unexistant");
	me->equip(tmp);

	std::cout << std::endl;
	me->unequip(2);
	me->unequip(2);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);

	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	// me->unequip(3);
	// me->unequip(4);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
