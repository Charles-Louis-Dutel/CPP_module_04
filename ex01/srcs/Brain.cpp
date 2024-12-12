/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:48:27 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 19:25:30 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_brain_ideas[i] = "Neutral Brain got ideas";
    }
}

Brain::Brain(std::string brain_type) : _brain_type(brain_type)
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_brain_ideas[i] = _brain_type + " Brain got ideas";
    }
}

Brain::Brain(Brain const &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

/*Operator overload*/
Brain   &Brain::operator=(Brain const &inst)
{
    if (this != &inst)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_brain_ideas[i] = inst._brain_ideas[i];
        }
        this->_brain_type = inst._brain_type;
    }
    return (*this);
}

/*Public member functions*/
void    Brain::printBrainIdeas(void) const
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << this->_brain_ideas[i] << std::endl;     
    }
}