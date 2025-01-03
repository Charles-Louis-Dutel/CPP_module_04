/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:33:39 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/03 14:45:21 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class	Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const &copy);
		~Cat(void);

		Cat	&operator=(Cat const &inst);

		virtual void	makeSound(void) const;
		void			BrainIdeas(void) const;
		void			changeIdeas(std::string ideas);

	private:
		Brain			*_cat_brain;
};

#endif
