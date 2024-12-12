/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:33:56 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 15:36:45 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class   Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &copy);
        ~Dog(void);

        Dog &operator=(Dog const &inst);
        
        virtual void    makeSound(void) const;
};

#endif
