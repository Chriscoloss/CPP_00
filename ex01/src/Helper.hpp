/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:34:40 by chorst            #+#    #+#             */
/*   Updated: 2024/10/10 17:19:30 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
# define HELPER_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

bool	phonebook_full(int i, int b);
std::string	phonebook_truncate(std::string str);
std::string	getline_secure(void);
std::string	getline_secure_numbers(void);
std::string	getline_secure_chars(void);

#endif
