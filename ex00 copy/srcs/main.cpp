/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:05:49 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/10 14:03:03 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main (void)
{
	DiamondTrap Boba("BOBA");

	std::cout << std::endl;
	Boba.whoAmI();
	std::cout << std::endl;
	Boba.display_stat();
	std::cout << std::endl;
	Boba.attack("BOBA");
	std::cout << std::endl;
	Boba.takeDamage(30);
	std::cout << std::endl;
	Boba.beRepaired(15);
	std::cout << std::endl;
	Boba.guardGate();
	Boba.highFivesGuys();
	std::cout << std::endl;
	
	return (0);
}
