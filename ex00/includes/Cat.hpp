/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:33:39 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 15:38:59 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class   Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &copy);
        ~Cat(void);

        Cat &operator=(Cat const &inst);

        virtual void makeSound(void) const;
};

#endif