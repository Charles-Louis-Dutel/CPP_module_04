/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:38:17 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/03 13:50:49 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	public:
		Brain(void);
		Brain(std::string brain_type);
		Brain(Brain const &copy);
		~Brain(void);

		Brain	&operator=(Brain const &copy);

		void	printBrainIdeas(void) const;
		void	changeBrainIdeas(std::string ideas);

	private:
		std::string	_ideas[100];
		std::string	_brain_type;
};

#endif
