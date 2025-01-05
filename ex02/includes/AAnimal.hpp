/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:00:00 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/03 14:43:22 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Brain.hpp"

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const &copy);
		virtual ~AAnimal(void);

		AAnimal &operator=(AAnimal const &inst);

		std::string		getType(void) const;
		void			setType(std::string animal_type);
		virtual void	makeSound(void) const = 0;


	protected:
		std::string _type;
};


#endif
