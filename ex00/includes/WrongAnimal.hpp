/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:03:53 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 16:10:05 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class   WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &copy);
        ~WrongAnimal(void);

        WrongAnimal &operator=(WrongAnimal const &inst);

        std::string getType(void) const;
        void        setType(std::string animal_type);
        void        makeSound(void) const;

    protected:
        std::string _type;
};

# endif