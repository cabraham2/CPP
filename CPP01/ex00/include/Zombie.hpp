/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:07:38 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:07:39 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>

// classes
class Zombie
{
	private:
		std::string	_name;
	public:
	// Constructors
		Zombie(std::string s);
	// Deconstructors
		~Zombie();
	// Public Methods
		void	announce(void)const;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);