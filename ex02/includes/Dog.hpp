/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:33:56 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 17:41:24 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class	Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);

		Dog	&operator=(Dog const &inst);

		virtual void	makeSound(void) const;
		void			BrainIdeas(void) const;
		void			changeIdeas(std::string ideas);

	private:
		Brain			*_dog_brain;
};

#endif
