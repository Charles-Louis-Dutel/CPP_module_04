/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:38:19 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/06 10:33:37 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	setType("Dog");
	this->_dog_brain = new Brain(this->_type);
	if (!this->_dog_brain)
	{
		std::cerr << "Error allocating dog brain" << std::endl;
		exit(1);
	}
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_dog_brain = new Brain();
	if (!this->_dog_brain)
	{
		std::cerr << "Error allocating dog brain" << std::endl;
		exit(1);
	}
	*this->_dog_brain = *copy._dog_brain;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_dog_brain;
}

/*Operator overload*/
Dog	&Dog::operator=(Dog const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
		if (this->_dog_brain)
			delete this->_dog_brain;
		this->_dog_brain = new Brain();
		if (!this->_dog_brain)
		{
			std::cerr << "Error allocating dog brain" << std::endl;
			exit(1);
		}
		*this->_dog_brain = *inst._dog_brain;
	}
	return (*this);
}

/*Public Member functions*/
void	Dog::makeSound(void) const
{
	std::cout << "Wouaf wouaf" << std::endl;
}

void	Dog::BrainIdeas(void) const
{
	this->_dog_brain->printBrainIdeas();
}

void	Dog::changeIdeas(std::string ideas)
{
	this->_dog_brain->changeBrainIdeas(ideas);
}
