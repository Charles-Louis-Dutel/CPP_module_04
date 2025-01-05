/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:06:48 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 17:33:01 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria()
{
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
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
