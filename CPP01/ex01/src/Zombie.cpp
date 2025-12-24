/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:17:18 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:19:12 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie()
{
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

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}