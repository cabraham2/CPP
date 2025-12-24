/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:56:38 by clementabra       #+#    #+#             */
/*   Updated: 2025/11/09 14:56:39 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact	_contacts[8];
		int		_index;
		bool	_full;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	set_information(void);
		void	get_information(void)const;
		void	show_instruction(void);
};

#endif