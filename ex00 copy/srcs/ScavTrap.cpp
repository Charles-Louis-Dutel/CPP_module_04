/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:05:28 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/09 15:03:49 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_Hit_pts = 100;
	this->_Energy_pts = 50;
	this->_Attack_dmg = 20;
	this->_guarding_mode = 0;
	std::cout << "\033[34mScavTrap\033[0m default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_Hit_pts = 100;
	this->_Energy_pts = 50;
	this->_Attack_dmg = 20;
	this->_guarding_mode = 0;
	std::cout << "\033[34mScavTrap\033[0m " << name;
	std::cout << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout << "\033[34mScavTrap\033[0m Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[34mScavTrap\033[0m " << this->_Name;
	std::cout << " destructor called" << std::endl;
}


/*Operator overload*/
ScavTrap	&ScavTrap::operator=(ScavTrap const &inst)
{
	if (this != &inst)
	{
		this->_Attack_dmg = inst._Attack_dmg;
		this->_Energy_pts = inst._Energy_pts;
		this->_Hit_pts = inst._Hit_pts;
		this->_Name = inst._Name;
		this->_guarding_mode = inst._guarding_mode;
	}
	return (*this);
}


/*Public member functions*/
void	ScavTrap::attack(const std::string &target)
{
	if (this->_Hit_pts <= 0)
	{
		std::cout << "\033[34mScavTrap\033[0m " << this->_Name << " is already dead";
		std::cout << std::endl;
		return;
	}
	else if (this->_Energy_pts <= 0)
	{
		std::cout << "\033[34mScavTrap\033[0m " << this->_Name;
		std::cout << " has no energy point left, he cannot attack" << std::endl;
		return;
	}
	std::cout << "\033[34mScavTrap\033[0m " << this->_Name << " attacks " << target;
	std::cout << " causing " << this->_Attack_dmg << " points of damage!";
	std::cout << std::endl;
	this->_Energy_pts--;
	std::cout << "\033[34mScavTrap\033[0m " << this->_Name << " lost 1 energy points, energy points left : ";
	std::cout << this->_Energy_pts << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guarding_mode != 0)
	{
		std::cout << "\033[34mScavTrap\033[0m " << this->_Name << " is already in Gate keeper mode";
		std::cout << std::endl;
		return;
	}
	this->_guarding_mode = 1;
	std::cout << "\033[34mScavTrap\033[0m " << this->_Name << " is now in Gate keeper mode";
	std::cout << std::endl;
}
