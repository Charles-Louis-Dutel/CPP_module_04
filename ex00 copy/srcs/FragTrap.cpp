/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:35:40 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/10 12:28:12 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_Hit_pts = 100;
	if (this->_Energy_pts != 50)
		this->_Energy_pts = 100;
	this->_Attack_dmg = 30;
	std::cout << "\033[31mFragTrap\033[0m default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Hit_pts = 100;
	if (this->_Energy_pts != 50)
		this->_Energy_pts = 100;
	this->_Attack_dmg = 30;
	std::cout << "\033[31mFragTrap\033[0m " << name;
	std::cout << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "\033[31mFragTrap\033[0m Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[31mFragTrap\033[0m " << this->_Name;
	std::cout << " destructor called" << std::endl;
}

/*Operator overload*/
FragTrap	&FragTrap::operator=(FragTrap const &inst)
{
	if (this != &inst)
	{
		this->_Attack_dmg = inst._Attack_dmg;
		this->_Energy_pts = inst._Energy_pts;
		this->_Hit_pts = inst._Hit_pts;
		this->_Name = inst._Name;
	}
	return (*this);
}

/*Public member functions*/
void	FragTrap::attack(const std::string &target)
{
	if (this->_Hit_pts <= 0)
	{
		std::cout << "\033[31mFragTrap\033[0m " << this->_Name << " is already dead";
		std::cout << std::endl;
		return;
	}
	else if (this->_Energy_pts <= 0)
	{
		std::cout << "\033[31mFragTrap\033[0m " << this->_Name;
		std::cout << " has no energy point left, he cannot attack" << std::endl;
		return;
	}
	std::cout << "\033[31mFragTrap\033[0m " << this->_Name << " attacks " << target;
	std::cout << " causing " << this->_Attack_dmg << " points of damage!";
	std::cout << std::endl;
	this->_Energy_pts--;
	std::cout << "\033[31mFragTrap\033[0m " << this->_Name << " lost 1 energy points, energy points left : ";
	std::cout << this->_Energy_pts << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[31mFragTrap\033[0m " << this->_Name;
	std::cout << " is requesting a high fives with you" << std::endl;
}
