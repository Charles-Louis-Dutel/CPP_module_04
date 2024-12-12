/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:00:00 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 16:09:51 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class   Animal
{
    public:
        Animal(void);
        Animal(Animal const &copy);
        virtual ~Animal(void);

        Animal &operator=(Animal const &inst);

        std::string    getType(void) const;
        void           setType(std::string animal_type);
        virtual void   makeSound(void) const;
    
    protected:
        std::string _type;
};


#endif