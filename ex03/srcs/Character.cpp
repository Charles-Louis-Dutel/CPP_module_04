/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:03:45 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 17:37:27 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(void) : _materias(), _index(0)
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _materias(), _index(0)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = copy._materias[i]->clone();
	}
	this->_index = copy._index;
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_unequiped[i])
			delete this->_unequiped[i];
	}
	for (int i = 0; i < copy._index; i++)
	{
		this->_unequiped[i] = copy._unequiped[i]->clone();
	}
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	for (int i = 0; i < this->_index; i++)
	{
		delete this->_unequiped[i];
	}
}


/*Operator overload*/
Character	&Character::operator=(Character const &inst)
{
	if (this != &inst)
	{
		this->_name = inst._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i])
				delete this->_materias[i];
			this->_materias[i] = inst._materias[i]->clone();
		}
		this->_index = inst._index;
		for (int i = 0; i < this->_index; i++)
		{
			if (this->_unequiped[i])
				delete this->_unequiped[i];
		}
		for (int i = 0; i < inst._index; i++)
		{
			this->_unequiped[i] = inst._unequiped[i]->clone();
		}
	}
	return (*this);
}


/*Public member functions*/
std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			return;
		}
		if (i == 4)
			std::cout << "Materias inventory is full" << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (this->_materias[idx])
	{
		std::cout << "Materia " << this->_materias[idx]->getType() << "has been dropped on the ground";
		std::cout << std::endl;
		this->_unequiped[this->_index] = this->_materias[idx];
		this->_materias[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "This idx is unexistant" << std::endl;
	else if (!this->_materias[idx])
	{
		std::cout << "Materia " << idx << " is empty" << std::endl;
	}
	else
	{
		this->_materias[idx]->use(target);
	}
}
