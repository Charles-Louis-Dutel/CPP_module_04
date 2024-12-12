/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:56:35 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/10 13:56:10 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_Hit_pts = FragTrap::_Hit_pts;
	this->_Energy_pts = ScavTrap::_Energy_pts;
	this->_Attack_dmg = FragTrap::_Attack_dmg;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_Name = name;
	this->_Hit_pts = FragTrap::_Hit_pts;
	this->_Energy_pts = ScavTrap::_Energy_pts;
	this->_Attack_dmg = FragTrap::_Attack_dmg;
	std::cout << "DiamondTrap " << name;
	std::cout << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_Name << " destructor called";
	std::cout << std::endl;
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &inst)
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

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is : " << this->_Name;
	std::cout << std::endl;
	std::cout << "My ClapTrap name is : " << ClapTrap::_Name;
	std::cout << std::endl;
}

void	DiamondTrap::display_stat(void) const
{
	std::cout << "DiamondTrap Hit points : " << this->_Hit_pts << std::endl;
	std::cout << "DiamondTrap Energy points : " << this->_Energy_pts << std::endl;
	std::cout << "DiamondTrap Attack damage : " << this->_Attack_dmg << std::endl;
}