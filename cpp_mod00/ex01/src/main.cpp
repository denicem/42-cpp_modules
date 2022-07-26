/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:11:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/07 18:44:29 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.h"
#include "../inc/Phonebook.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

void addContact(Phonebook& pb)
{
	std::string first, last, nickname, number, secret;

	std::cout << "First Name\n> ";
	while (getline(std::cin, first) && first.empty())
		std::cout << "> ";

	std::cout << "Last Name\n> ";
	while (getline(std::cin, last) && last.empty())
		std::cout << "> ";

	std::cout << "Nickname\n> ";
	while (getline(std::cin, nickname) && nickname.empty())
		std::cout << "> ";

	std::cout << "Phone number\n> ";
	while (getline(std::cin, number) && number.empty())
		std::cout << "> ";

	std::cout << "Tell me the biggest secret from this person\n> ";
	while (getline(std::cin, secret) && secret.empty())
		std::cout << "> ";

	pb.addContact(first, last, nickname, number, secret);
	std::cout << "Successfully added contact to Phonebook.\n";
}

void searchContact(Phonebook& pb)
{
	std::string str_nbr;
	int	index;
	if (pb.empty())
		std::cout << "Phonebook is empty. Try to add some contacts first.\n";
	else
	{
		pb.displayContacts();
		std::cout << "Enter a number between 1-8.\n> ";
		while (getline(std::cin, str_nbr))
		{
			if (str_nbr.empty())
			{
				std::cout << "> ";
				continue;
			}
			if (str_nbr.find_first_not_of("0123456789") != std::string::npos)
				std::cout << "Only numeric argument please.\n";
			else
				break;
		}
		index = atoi(str_nbr.c_str());
		pb.getContact(index - 1);
	}
}

int main()
{
	Phonebook	pb;
	std::string	input;

	// pb.addContact("DNC", "M", "dncmon", "1234", "Pssht!");
	// pb.addContact("Denice Georgettezen", "Montemayor", "DGM", "20111995", "ohwow!");
	// pb.addContact("EMS", "V", "emvuc", "5678", "huhu!");
	// pb.addContact("Ali", "Gapmann", "Ali?", "012712", "NAHH!");
	// pb.addContact("Lorraine Mer", "Cortez", "Locyyy/LOCO", "434238377", "Die Coolste.");
	// pb.addContact("Randolf", "Bueno", "mnkeybiz", "13546", "prod by BRANDIIII");
	// pb.addContact("Ralph Daniel", "Pacheco", "Pach", "5435786", "PACHIIII");

	pb.display_prompt();
	std::cout << "> ";
	while (getline(std::cin, input) && input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			addContact(pb);
		else if (!input.compare("SEARCH"))
			searchContact(pb);
		else if (input.empty())
		{
			std::cout << "> ";
			continue;
		}
		else
		{
			std::cout << "Please try again.\n";
			std::cout << "> ";
			continue;
		}
		pb.display_prompt();
		std::cout << "> ";
	}
	std::cout << "\nGOODBYE.\n";
	return (0);
}
