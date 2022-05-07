/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:07:15 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/07 15:31:17 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"
#include "Contact.h"

#include <iostream>
#include <iomanip>
#include <array>

Phonebook::Phonebook()
{
	count = 0;
}

bool Phonebook::contactExist(int index)
{
	if (contacts[index].get_first().empty()
		|| contacts[index].get_last().empty()
		|| contacts[index].get_nickname().empty()
		|| contacts[index].get_number().empty()
		|| contacts[index].get_secret().empty())
		return (false);
	return (true);
}

void Phonebook::addContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret)
{
	contacts[count].set_first(first);
	contacts[count].set_last(last);
	contacts[count].set_nickname(nickname);
	contacts[count].set_number(number);
	contacts[count].set_secret(secret);
	count = (count + 1) % 8;
}

std::string Phonebook::get_trunc_str(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Phonebook::displayContacts()
{
	for (int i = 0; contactExist(i); i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << " | "; 
		std::cout << std::right << std::setw(10) << get_trunc_str(contacts[i].get_first()) << " | "; 
		std::cout << std::right << std::setw(10) << get_trunc_str(contacts[i].get_last()) << " | "; 
		std::cout << std::right << std::setw(10) << get_trunc_str(contacts[i].get_nickname()) << std::endl;
	}
}

void Phonebook::getContact(int index)
{
	if (index >= 0 && index <= 7)
	{
		if (contactExist(index))
		{
			std::cout << std::right << std::setw(10) << index + 1 << " | "; 
			std::cout << std::right << std::setw(10) << get_trunc_str(contacts[index].get_first()) << " | "; 
			std::cout << std::right << std::setw(10) << get_trunc_str(contacts[index].get_last()) << " | "; 
			std::cout << std::right << std::setw(10) << get_trunc_str(contacts[index].get_nickname()) << std::endl;
		}
		else
			std::cout << "Contact doesn't exist.\n";
	}
	else
		std::cout << "Index out of range!\n";
}

void Phonebook::display_phonebook(void)
{
	std::cout << std::setw(65) << " ________________________________________________________________" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      *~*~*~*~*~*    WELCOME TO MY PHONEBOOK    *~*~*~*~*~*     |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      *~*~*~*~*~*    PLEASE SELECT AN OPTION    *~*~*~*~*~*     |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|                              ADD                               |" << std::endl;
	std::cout << std::setw(65) << "|                   ~~> to add a new contact                     |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|                             SEARCH                             |" << std::endl;
	std::cout << std::setw(65) << "|                   ~~> to display a specific contact            |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|                             EXIT                               |" << std::endl;
	std::cout << std::setw(65) << "|                   ~~> to exit the phonebook                    |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|________________________________________________________________|" << std::endl;
}

bool Phonebook::empty()
{
	if (contactExist(0))
		return (false);
	return (true);
}