/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:34:32 by chorst            #+#    #+#             */
/*   Updated: 2024/10/10 17:19:11 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.hpp"

// Small function to check if the phonebook is full
bool	phonebook_full(int i, int b)
{
	if (i == 8 || b > 0)
		return true;
	return false;
}

// Function to truncate a string of the phonebook
std::string	phonebook_truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	else
		str = std::string(10 - str.length(), ' ') + str;
	return str;
}

// Basic function to get a secure input
std::string getline_secure()
{
	std::string input;

	if (std::cin.eof() || !std::getline(std::cin, input))
		return "";
	if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
		return input;
	return "";
}

// Function to get a secure phone number
std::string getline_secure_numbers()
{
	std::string input;

	input = "";
	while (input == "")
	{
		if (!std::getline(std::cin, input))
			input = "";
		if (std::cin.eof())
			return "";
		if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
		{
			if (input.find_first_not_of("0123456789") == std::string::npos)
				return input;
			else
				std::cout << "\033[1;31mYou need to enter a valid phone number: \033[0m" << std::endl;
		}
	}
	return "";
}

// Function to get a secure name
std::string getline_secure_chars()
{
	std::string input;

	input = "";
	while (input == "")
	{
		if (!std::getline(std::cin, input))
			input = "";
		if (std::cin.eof())
			return "";
		if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
		{
			if (input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos)
				return input;
			else
				std::cout << "\033[1;31mYou need to enter a valid name! \033[0m" << std::endl;
		}
	}
	return "";
}
