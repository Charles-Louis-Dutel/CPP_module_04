/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:12:03 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 17:41:51 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

/*Operator overload*/
AAnimal  &AAnimal::operator=(AAnimal const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
	}
	return (*this);
}

/*Public Member functions*/
std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string animal_type)
{
	this->_type = animal_type;
}
