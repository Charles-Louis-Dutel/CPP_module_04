/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:35:34 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 12:18:46 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria()
{
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}


/*Operator overload*/
Ice	&Ice::operator=(Ice const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
	}
	return (*this);
}


/*Public member functions*/
AMateria	*Ice::clone(void) const
{
	AMateria *cloned_inst = new Ice(*this);

	return (cloned_inst);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}
