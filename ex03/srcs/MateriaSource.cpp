/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:00:07 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/06 16:07:33 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void) : materias()
{
	std::cout << "\033[32mMateriaSource default constructor called\033[0m" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy) : materias()
{
	std::cout << "\033[32mMateriaSource copy constructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		// if (this->materias[i])
		// 	delete this->materias[i];
		this->materias[i] = copy.materias[i]->clone();
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "\033[31mMateriaSource destructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}


/*Operator overload*/
MateriaSource	&MateriaSource::operator=(MateriaSource const &inst)
{
	if (this != &inst)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materias[i])
				delete this->materias[i];
			this->materias[i] = inst.materias[i]->clone();
		}
	}
	return (*this);
}


/*Public member functions*/
void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materia)
			return;
		if (this->materias[i] == materia)
		{
			std::cout << "This Materia is allready learned" << std::endl;
			return;
		}
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			return;
		}
	}
	std::cout << "Materia inventory is already full" << std::endl;
	delete materia;
	materia = NULL;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i]-> getType() == type)
		{
			return (this->materias[i]->clone());
		}
	}
	std::cout << "Unknown materia" << std::endl;
	return (0);
}
