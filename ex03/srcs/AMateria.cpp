/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:29:40 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/06 16:04:16 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(void)
{
	std::cout << "\033[32mAMateria default constructor called\033[0m" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "\033[32mAMateria constructor called\033[0m" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "\033[32mAMateria copy constructor called\033[0m" << std::endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	std::cout << "\033[31mAMateria destructor called\033[0m" << std::endl;
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
