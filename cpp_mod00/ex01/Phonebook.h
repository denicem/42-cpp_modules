/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:34:17 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/05 19:02:42 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include <array>

class Phonebook
{
private:
	Contact contacts[8];

public:
	Phonebook();
	static int count;

	void addContact(std::string, std::string, std::string, std::string, std::string);
	void displayContact(int);
};
