/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:11:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/06 22:17:10 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//FIXME: don't use cin, because it takes/assigns the next word automatically to the next variable - should read line by line

#include "Contact.h"
#include "Phonebook.h"
#include <iostream>
#include <string>

void addContact(Phonebook& pb)
{
	std::string first;
	std::string last;
	std::string nickname;
	std::string number;
	std::string secret;

	std::cout << "Enter the following syntax to add a contact: [First Name] [Last Name] [Nickname] [Phone number] [Deepest secret]:\n";
	// std::cout << "First Name: ";
	std::cin >> first;
	// std::cout << "Last Name: ";
	std::cin >> last;
	// std::cout << "Nickname: ";
	std::cin >> nickname;
	// std::cout << "Phone number: ";
	std::cin >> number;
	// std::cout << "Tell me the biggest secret from this person: ";
	std::cin >> secret;
	pb.addContact(first, last, nickname, number, secret);
	std::cout << "Successfully added contact to Phonebook.\n";
}

void searchContact(Phonebook& pb)
{
	int index;

	std::cout << "Enter a number between 1-8 to search for: ";
	std::cin >> index;
	pb.displayContact(index - 1);
}

int main()
{
	Phonebook pb;
	std::string input;

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
	pb.display_phonebook();
	while (std::cin >> input && input.compare("EXIT"))
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
	system("leaks a.out");
	// std::cout << c0.get_first() << " " << c0.get_last() << " (" << c0.get_nickname() << ") : " << c0.get_number() << " | " << c0.get_secret() << std::endl;
	return (0);
}
