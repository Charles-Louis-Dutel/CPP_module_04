/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:36:20 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/09 16:18:49 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &inst);

		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif
