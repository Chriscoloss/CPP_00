/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:52:34 by chorst            #+#    #+#             */
/*   Updated: 2024/10/09 15:55:25 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Helper.hpp"

#define ADD		"\033[1;33mADD\033[0m"
#define SEARCH	"\033[1;33mSEARCH\033[0m"
#define EXIT	"\033[1;33mEXIT\033[0m"
#define INDEX	"\033[1;33mINDEX\033[0m";

class PhoneBook
{
	private:
				// Attributes
				// 8 index contacts of class Contact
				Contact _contact[8];
				int		_i;
				int		_b;
				int		_x;
	public:
				PhoneBook();
				~PhoneBook();
				void		add(void);
				void		search(void);
				// void	search(void);
};


# endif
