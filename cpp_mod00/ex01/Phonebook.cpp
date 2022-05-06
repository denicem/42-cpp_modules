/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:07:15 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/06 18:17:12 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"
#include "Contact.h"

#include <iostream>
#include <iomanip>
#include <array>

int Phonebook::count = 0;

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

Phonebook::Phonebook()
{
	std::cout << "Phonebook created.\n";
}

void Phonebook::addContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret)
{
	contacts[count].set_first(first);
	contacts[count].set_last(last);
	contacts[count].set_nickname(nickname);
	contacts[count].set_number(number);
	contacts[count].set_secret(secret);
	// std::cout << "Succesfully added Contact.\n";
	count = (count + 1) % 8;
}

void Phonebook::displayContact(int index)
{
	if (index >= 0 && index <= 7)
	{
		if (contactExist(index))
		{
			std::cout << "Contact #" << index + 1 << std::endl;
			std::cout << contacts[index].get_first() << " " << contacts[index].get_last() << " (" << contacts[index].get_nickname() << "):\n";
			std::cout << contacts[index].get_number() << std::endl;
			std::cout << "Pssht: " << contacts[index].get_secret() << std::endl;
		}
		else
			std::cout << "Contact doesn't exist.\n";
	}
	else
		std::cout << "Contact out of range!\n";
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
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|________________________________________________________________|" << std::endl;
}