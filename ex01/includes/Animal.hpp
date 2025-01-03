/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:00:00 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/03 13:43:34 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Brain.hpp"

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const &copy);
		virtual ~Animal(void);

		Animal &operator=(Animal const &inst);

		std::string		getType(void) const;
		void			setType(std::string animal_type);
		virtual void	makeSound(void) const;


	protected:
		std::string _type;
};


#endif
