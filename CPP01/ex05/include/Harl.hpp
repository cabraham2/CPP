/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:29:08 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:29:08 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include <cstdlib>

// classes

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
	// Constructors
		Harl();

	// Deconstructors
		~Harl();

	// Public Methods
		void	complain(std::string level);
	// Getter

	// Setter

};