/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:37:02 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 16:40:35 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    setType("Cat");
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

/*Operator overload*/
Cat     &Cat::operator=(Cat const &inst)
{
    if (this != &inst)
    {
        this->_type = inst._type;
    }
    return (*this);
}

/*Public member functions*/
void    Cat::makeSound(void) const
{
    std::cout << "Meowwwwww" << std::endl;
}