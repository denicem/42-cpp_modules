/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:07:15 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/05 19:03:37 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"
#include "Contact.h"

#include <iostream>
#include <array>

int Phonebook::count = 0;

Phonebook::Phonebook()
{
	// count = 0;
	std::cout << "Phonebook created.\n";
}

void Phonebook::addContact(std::string first, std::string last, std::string nickname, std::string number, std::string secret)
{
	contacts[count].set_first(first);
	contacts[count].set_last(last);
	contacts[count].set_nickname(nickname);
	contacts[count].set_number(number);
	contacts[count].set_secret(secret);
	std::cout << "Succesfully added Contact.\n";
	count = (count + 1) % 8;
}

void Phonebook::displayContact(int index)
{
	std::cout << "Contact #" << index + 1 << std::endl;
	std::cout << contacts[index].get_first() << " " << contacts[index].get_last() << " (" << contacts[index].get_nickname() << "):\n";
	std::cout << contacts[index].get_number() << std::endl;
	std::cout << "Pssht: " << contacts[index].get_secret() << std::endl;
}
