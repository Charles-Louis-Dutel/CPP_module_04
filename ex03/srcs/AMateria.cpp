/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:29:40 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 17:32:25 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}


/*Operator overload*/
AMateria	&AMateria::operator=(AMateria const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
	}
	return (*this);
}

/*Public member functions*/
std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria without a _type can't do an action at ";
	std::cout << target.getName() << std::endl;
}
