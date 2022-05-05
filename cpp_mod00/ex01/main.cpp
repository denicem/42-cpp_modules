/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:11:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/05 19:06:12 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include "Phonebook.h"
#include <iostream>

int main()
{
	Phonebook pb;

	pb.addContact("DNC", "M", "dncmon", "1234", "Pssht!");
	pb.displayContact(0);
	// Contact c0 = Contact("DNC", "M", "dncmon", "1234", "Pssht!");
	// c0.set_first("Denice");
	// std::cout << c0.get_first() << " " << c0.get_last() << " (" << c0.get_nickname() << ") : " << c0.get_number() << " | " << c0.get_secret() << std::endl;
	return (0);
}
