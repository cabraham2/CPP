/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:24:11 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 16:24:12 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor
HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name <<" joined the battlefield and grabbed a " << this->_weapon.getType() << " to fight." << std::endl;
}

// Deconstructor
HumanA::~HumanA(void)
{
    std::cout << this->_name << " died." << std::endl;
}

// Public Methods
void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << "." << std::endl;
}