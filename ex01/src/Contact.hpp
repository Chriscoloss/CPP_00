/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:52:53 by chorst            #+#    #+#             */
/*   Updated: 2024/10/09 11:52:20 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	private:
				// Attributes
				std::string	_firstName;
				std::string	_lastName;
				std::string	_nickname;
				std::string	_phoneNumber;
				std::string	_darkestSecret;
	public:
				// Constructor
				Contact();

				// Destructor
				~Contact();

				// Setters
				void		set_first_name(std::string str);
				void		set_last_name(std::string str);
				void		set_nickname(std::string str);
				void		set_phone_number(std::string str);
				void		set_darkest_secret(std::string str);

				// Getters
				std::string	get_first_name(void);
				std::string	get_last_name(void);
				std::string	get_nickname(void);
				std::string	get_phone_number(void);
				std::string	get_darkest_secret(void);
};

#endif
