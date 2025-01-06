/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:35:34 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/06 16:07:03 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria()
{
	std::cout << "\033[32mIce default constructor called\033[0m" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	std::cout << "\033[32mIce constructor called\033[0m" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
	std::cout << "\033[32mIce copy constructor called\033[0m" << std::endl;
	*this = copy;
}

Ice::~Ice(void)
{
	std::cout << "\033[31mIce destructor called\033[0m" << std::endl;
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
