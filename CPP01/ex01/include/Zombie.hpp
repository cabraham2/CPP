/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:16:50 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:19:15 by clementabra      ###   ########.fr       */
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
		Zombie();
	// Deconstructors
		~Zombie();
	// Public Methods
		void	announce(void)const;
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);