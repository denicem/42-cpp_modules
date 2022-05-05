/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contach.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:01:59 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/05 04:01:59 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

#include <iostream>

Contact::Contact(std::string first, std::string last, std::string number, std::string secret)
{
	if (first.empty() || last.empty() || number.empty() || secret.empty())
	{
		std::cout << "All of the fields have to be empty!\n";
		return ;
	}
	this->first = first;
	this->last = last;
	this->number = number;
	this->secret = secret;
}

void Contact::set_first(std::string first)
{
	this->first = first;
}

void Contact::set_last(std::string last)
{
	this->last = last;
}

void Contact::set_number(std::string number)
{
	this->number = number;
}

void Contact::set_secret(std::string secret)
{
	this->secret = secret;
}

std::string Contact::get_first()
{
	return (this->first);
}

std::string Contact::get_last()
{
	return (this->last);
}
std::string Contact::get_number()
{
	return (this->number);
}

std::string Contact::get_secret()
{
	return (this->secret);
}
