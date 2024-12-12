/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:38:17 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 19:17:28 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class   Brain
{
    public:
        Brain(void);
        Brain(std::string brain_type);
        Brain(Brain const &copy);
        ~Brain(void);

        Brain   &operator=(Brain const &copy);

        void    printBrainIdeas(void) const;

    private:
        std::string _brain_ideas[100];
        std::string _brain_type;
};

#endif