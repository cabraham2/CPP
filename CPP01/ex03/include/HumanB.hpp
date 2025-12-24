/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:23:25 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:23:25 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
		bool _is_armed;
	public:
	// Constructor
		HumanB(std::string name);
	// Deconstructor
		~HumanB(void);
	// Getter

	// Setter
		void setWeapon(Weapon &weapon);
	// Public Methods
		void attack(void);
};