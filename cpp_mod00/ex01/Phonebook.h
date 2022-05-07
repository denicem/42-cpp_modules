/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:34:17 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/07 18:08:32 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include <array>

class Phonebook
{
private:
	unsigned int count;
	Contact contacts[8];

	bool contactExist(int);
	std::string get_trunc_str(std::string);

public:
	Phonebook();

	void addContact(std::string, std::string, std::string, std::string, std::string);
	void getContact(int);
	bool empty();
	void displayContacts();
	void display_prompt();
};
