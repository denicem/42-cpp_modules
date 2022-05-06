/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:34:17 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/06 17:11:41 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include <array>

class Phonebook
{
private:
	static int count;
	Contact contacts[8];
	bool contactExist(int);

public:
	Phonebook();

	void addContact(std::string, std::string, std::string, std::string, std::string);
	void displayContact(int);
	void display_phonebook();
};
