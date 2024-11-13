/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:09:44 by chorst            #+#    #+#             */
/*   Updated: 2024/10/09 16:33:56 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	command;

	command = "";
	while (1)
	{
		std::cout << "Enter " << ADD << ", " << SEARCH << " or " << EXIT << " here: ";
		while (command == "")
		{
			command = getline_secure();
			if (command == "ADD")
				PhoneBook.add();
			else if (command == "SEARCH")
				PhoneBook.search();
			else if (command == "EXIT" || std::cin.eof())
				return (0);
			if (command.empty() || (command != "ADD" && command != "SEARCH" && command != "EXIT"))
			{
				std::cout << "\033[1;31mYou need to enter a valid command: \033[0m";
				command = "";
			}
			command = "";
		}
	}
}


// -std=c++98
