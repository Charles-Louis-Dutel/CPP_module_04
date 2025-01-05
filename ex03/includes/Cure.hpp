/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:02:01 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 16:37:59 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <string>
#include <new>

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &copy);
		~Cure(void);

		Cure				&operator=(Cure const &inst);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
