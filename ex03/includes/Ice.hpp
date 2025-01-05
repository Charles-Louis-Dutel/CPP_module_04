/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:00:23 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 16:38:13 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <string>
# include <new>

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &copy);
		~Ice(void);

		Ice					&operator=(Ice const &inst);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

# endif
