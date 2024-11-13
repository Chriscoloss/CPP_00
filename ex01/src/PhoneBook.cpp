/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:52:23 by chorst            #+#    #+#             */
/*   Updated: 2024/10/10 17:15:00 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_i = 0;
	this->_b = 0;
	this->_x = -1;
	std::cout << "\033[1;32mPhonebook created\033[0m" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << std::endl << "\033[1;31mPhonebook destroyed\033[0m" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string	input;

	input = "";
	if (this->_x != 7)
		this->_x = this->_i;
	if (phonebook_full(this->_i, this->_b) == true)
	{
		if (this->_b == 8)
			this->_b = 0;
		this->_i = this->_b;
		std::cout << "\033[1;31mPhonebook is full. You're about to overwrite the oldest contact: \033[0m";
		std::cout << this->_contact[this->_b].get_first_name();
		std::cout << " ";
		std::cout << this->_contact[this->_b].get_last_name();
		std::cout << std::endl;
		this->_b++;
	}
	input = "";
	while (input == "")
	{
		std::cout << "First name: ";
		input = getline_secure_chars();
		if (std::cin.eof())
			return;
		this->_contact[this->_i].set_first_name(input);
	}
	input = "";
	while (input == "")
	{
		std::cout << "Last name: ";
		input = getline_secure_chars();
		if (std::cin.eof())
			return;
		this->_contact[this->_i].set_last_name(input);
	}
	input = "";
	while (input == "")
	{
		std::cout << "Nickname: ";
		input = getline_secure();
		if (std::cin.eof())
			return;
		this->_contact[this->_i].set_nickname(input);
	}
	input = "";
	while (input == "")
	{
		std::cout << "Phone number: ";
		input = getline_secure_numbers();
		if (std::cin.eof())
			return;
		this->_contact[this->_i].set_phone_number(input);
	}
	input = "";
	while (input == "")
	{
		std::cout << "Darkest secret: ";
		input = getline_secure();
		if (std::cin.eof())
			return;
		this->_contact[this->_i].set_darkest_secret(input);
	}
	std::cout << "\033[1;32mContact added\033[0m" << std::endl;
	std::cout << "Enter " << ADD << ", " << SEARCH << " or " << EXIT << " here: ";
	this->_i++;
}

void	PhoneBook::search(void)
{
	int i;
	std::string	input;

	i = 0;
	if (this->_x == -1)
	{
		std::cout << "\033[1;31mPhonebook is empty\033[0m" << std::endl;
		std::cout << "Enter " << ADD << ", " << SEARCH << " or " << EXIT << " here: ";
		return ;
	}
	std::cout << "#############################################" << std::endl;
	std::cout << "|" << phonebook_truncate("INDEX") << "|" << phonebook_truncate("FIRST NAME") << "|" << phonebook_truncate("LAST NAME") << "|" << phonebook_truncate("NICKNAME") << "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (i <= this->_x)
	{
		std::cout << "|";
		std::cout << phonebook_truncate(std::to_string(i));
		std::cout << "|";
		std::cout << phonebook_truncate(this->_contact[i].get_first_name());
		std::cout << "|";
		std::cout << phonebook_truncate(this->_contact[i].get_last_name());
		std::cout << "|";
		std::cout << phonebook_truncate(this->_contact[i].get_nickname());
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "#############################################" << std::endl;
	std::cout << "Enter the ";
	std::cout << INDEX;
	std::cout << " number of a Contact here: ";
	input = "";
	while (input < "0" || input > "7")
	{
		input = getline_secure();
		if (std::cin.eof())
			return;
		if (std::cin.eof() || input < "0" || input > "7" || input.empty() || input.length() > 10 || stoi(input) > this->_x)
		{
			std::cout << "\033[1;31mYou need to enter a valid index number: \033[0m";
		}
		else
		{
			std::cout << "First name: ";
			std::cout << this->_contact[stoi(input)].get_first_name() << std::endl;
			std::cout << "Last name: ";
			std::cout << this->_contact[stoi(input)].get_last_name() << std::endl;
			std::cout << "Nickname: ";
			std::cout << this->_contact[stoi(input)].get_nickname() << std::endl;
			std::cout << "Phone number: ";
			std::cout << this->_contact[stoi(input)].get_phone_number() << std::endl;
			std::cout << "Darkest secret: ";
			std::cout << this->_contact[stoi(input)].get_darkest_secret() << std::endl;
			std::cout << "Enter " << ADD << ", " << SEARCH << " or " << EXIT << " here: ";
			return ;
		}
	}
}
