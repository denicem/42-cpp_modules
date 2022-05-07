/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:11:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/07 16:13:12 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "Phonebook.h"
#include <iostream>
#include <string>
#include <iomanip>

void addContact(Phonebook& pb)
{
	std::string first, last, nickname, number, secret;

	std::cout << "First Name: ";
	getline(std::cin, first);

	std::cout << "Last Name: ";
	getline(std::cin, last);

	std::cout << "Nickname: ";
	getline(std::cin, nickname);

	std::cout << "Phone number: ";
	getline(std::cin, number);

	std::cout << "Tell me the biggest secret from this person: ";
	getline(std::cin, secret);

	pb.addContact(first, last, nickname, number, secret);
	std::cout << "Successfully added contact to Phonebook.\n";
}

void searchContact(Phonebook& pb)
{
	std::string str_nbr;
	int	index;
	if (pb.empty())
		std::cout << "Phonebook is empty. Try to add some contacts.\n";
	else
	{
		pb.displayContacts();
		std::cout << "Enter a number between 1-8 to search for: ";
		getline(std::cin, str_nbr);
		index = stoi(str_nbr);
		pb.getContact(index - 1);
	}
}

int main()
{
	Phonebook	pb;
	std::string	input;

	pb.display_phonebook();
	while (getline(std::cin, input) && input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			addContact(pb);
		else if (!input.compare("SEARCH"))
			searchContact(pb);
		else
			std::cout << "Please try again.\n";
		pb.display_phonebook();
	}
	std::cout << "\nGOODBYE huhu.\n";
	return (0);
}

// pb.addContact("DNC", "M", "dncmon", "1234", "Pssht!");
// pb.addContact("EMS", "V", "emvuc", "5678", "huhu!");
// pb.displayContact(0);
// pb.displayContact(1);
// pb.displayContact(4);
// pb.displayContact(20);
// pb.displayContact(-20);
// pb.display_phonebook();
// Contact c0 = Contact("DNC", "M", "dncmon", "1234", "Pssht!");
// c0.set_first("Denice");
