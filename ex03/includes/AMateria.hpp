/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:21:02 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 17:28:30 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class	ICharacter;

class	AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		virtual ~AMateria(void);

		AMateria			&operator=(AMateria const &inst);

		std::string const	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string			_type;
};

#endif
