/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:08:50 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:08:51 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Buckethead Zombie

Zombie *newZombie(std::string name)
{
	Zombie *buckethead_zombie = new Zombie(name);
	buckethead_zombie->announce();
	return (buckethead_zombie);
}