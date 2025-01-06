/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:06:48 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/06 16:06:27 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria()
{
	std::cout << "\033[32mCure default constructor called\033[0m" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout << "\033[32mCure constructor called\033[0m" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	std::cout << "\033[32mCure copy constructor called\033[0m" << std::endl;
	*this = copy;
}

Cure::~Cure(void)
{
	std::cout << "\033[31mCure destructor called\033[0m" << std::endl;
}


/*Operator overload*/
Cure	&Cure::operator=(Cure const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
	}
	return (*this);
}


/*Public member functions*/
AMateria	*Cure::clone(void) const
{
	AMateria *clone_inst = new Cure(*this);

	return (clone_inst);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName();
	std::cout << "'s wounds *" << std::endl;
}
