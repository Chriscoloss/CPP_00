/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:52:44 by chorst            #+#    #+#             */
/*   Updated: 2024/10/08 12:33:17 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
// ############################## Constructor ##############################
Contact::Contact()
{
}

// ############################## Destructor ##############################
Contact::~Contact()
{
}

// ############################## Setters ##############################
void	Contact::set_first_name(std::string str)
{
	this->_firstName = str;
}

void	Contact::set_last_name(std::string str)
{
	this->_lastName = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->_phoneNumber = str;
}

void Contact::set_darkest_secret(std::string str)
{
	this->_darkestSecret = str;
}

// ############################## Getters ##############################
std::string	Contact::get_first_name(void)
{
	return (this->_firstName);
}

std::string Contact::get_last_name(void)
{
	return (this->_lastName);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void)
{
	return (this->_phoneNumber);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkestSecret);
}

