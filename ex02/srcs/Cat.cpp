/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:37:02 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/06 10:32:15 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	setType("Cat");
	this->_cat_brain = new Brain(this->_type);
	if (!this->_cat_brain)
	{
		std::cerr << "Error allocating cat brain" << std::endl;
		exit(1);
	}
}

Cat::Cat(Cat const &copy) : AAnimal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_cat_brain = new Brain();
	if (!this->_cat_brain)
	{
		std::cerr << "Error allocating cat brain" << std::endl;
		exit(1);
	}
	this->_cat_brain = copy._cat_brain;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_cat_brain;
}

/*Operator overload*/
Cat	 &Cat::operator=(Cat const &inst)
{
	if (this != &inst)
	{
		this->_type = inst._type;
		if (this->_cat_brain)
			delete this->_cat_brain;
		this->_cat_brain = new Brain();
		if (!this->_cat_brain)
		{
			std::cerr << "Error allocating cat brain" << std::endl;
			exit(1);
		}
		this->_cat_brain = inst._cat_brain;
	}
	return (*this);
}

/*Public member functions*/
void	Cat::makeSound(void) const
{
	std::cout << "Meowwwwww" << std::endl;
}

void	Cat::BrainIdeas(void) const
{
	this->_cat_brain->printBrainIdeas();
}

void	Cat::changeIdeas(std::string ideas)
{
	this->_cat_brain->changeBrainIdeas(ideas);
}
