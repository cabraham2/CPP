/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:23:49 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:23:50 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes
class Weapon
{
	private:
		std::string	_type;

	public:
	// Constructor
		Weapon(const std::string &weapon);
	// Deconstructors
		~Weapon();
	// Getter
		std::string getType() const;
	// Setter
		void setType(const std::string &weapon);
	// Public Methods

};