/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:50:49 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/05 16:20:54 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class	Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &copy);
		~Character(void);

		Character					&operator=(Character const &inst);

		virtual std::string const	&getName(void) const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

	private:
		std::string	_name;
		AMateria	*_materias[4];
		AMateria	*_unequiped[4096];
		int			_index;
};

#endif
