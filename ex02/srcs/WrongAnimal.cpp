/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:10:18 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 16:30:01 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

/*Operator overload*/
WrongAnimal     &WrongAnimal::operator=(WrongAnimal const &inst)
{
    if (this != &inst)
    {
        this->_type = inst._type;
    }
    return (*this);
}

/*Public member functions*/
std::string    WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::setType(std::string animal_type)
{
    this->_type = animal_type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal isn't an Animal, he can't make a sound" << std::endl;
}