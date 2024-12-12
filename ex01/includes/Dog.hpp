/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:33:56 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 19:21:31 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
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
        virtual void    BrainIdeas(void) const;

    private:
        Brain   *_dog_brain;
};

#endif
