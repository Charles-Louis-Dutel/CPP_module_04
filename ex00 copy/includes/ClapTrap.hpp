/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:04:37 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/27 16:16:32 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &inst);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string		_Name;
		unsigned int	_Hit_pts;
		unsigned int	_Energy_pts;
		unsigned int	_Attack_dmg;
};

#endif
