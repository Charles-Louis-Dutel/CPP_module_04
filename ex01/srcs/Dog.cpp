/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:38:19 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 19:18:32 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    setType("Dog");
    this->_dog_brain = new Brain(this->_type);
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_dog_brain;
}

/*Operator overload*/
Dog &Dog::operator=(Dog const &inst)
{
    if (this != &inst)
    {
        this->_type = inst._type;
    }
    return (*this);
}

/*Public Member functions*/
void    Dog::makeSound(void) const
{
    std::cout << "Wouaf wouaf" << std::endl;
}

void    Dog::BrainIdeas(void) const
{
    this->_dog_brain->printBrainIdeas();
}