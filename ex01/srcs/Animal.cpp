/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:12:03 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/03 13:39:17 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

/*Operator overload*/
Animal  &Animal::operator=(Animal const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
	}
	return (*this);
}

/*Public Member functions*/
std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string animal_type)
{
	this->_type = animal_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal without a specific type can't make a sound" << std::endl;
}
