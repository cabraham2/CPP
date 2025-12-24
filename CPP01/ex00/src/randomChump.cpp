/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:09:10 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:09:10 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Basic Zombie

void randomChump(std::string name)
{
	Zombie basic_zombie(name);
	basic_zombie.announce();
}