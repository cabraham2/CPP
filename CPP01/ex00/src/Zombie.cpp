/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:08:20 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:08:20 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string s) : _name(s)
{
	std::cout << "Hello i am about to launch an all out attack on your house. Sincerely, " << _name << "\n" << std::endl;
}

// Deconstructor
Zombie::~Zombie()
{
	std::cout << _name << " stepped on a Potato Mine and died.\n"  << std::endl;
}

// Public Methods

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}