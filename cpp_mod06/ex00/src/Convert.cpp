/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:21:34 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/08 23:38:25 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.h"

#include <string>
#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Convert::Convert(): input("undefined"), _type(NO_TYPE) {}
Convert::Convert(const Convert& other): input(other.input), _type(other._type) {}
Convert::Convert(std::string input): input(input), _type(NO_TYPE) {}

Convert::~Convert() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Convert& Convert::operator=(const Convert& other)
{
	if (this != &other)
	{
		this->input = other.input;
		this->_type = other._type;
		this->determined = other.determined;
		this->converted = other.determined;
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void Convert::determineType()
{
	if (this->input.length() == 1 && !std::isdigit(this->input[0]))
	{
		this->_type = CHAR_TYPE;
		return ;
	}
	int pos = this->input.find('.', 0);
	if (pos != std::string::npos)
	{
		if (this->input.find('.',  pos + 1) != std::string::npos)
			throw NotValidArgumentException();
		if (this->input.find('f', 0) + 1 == this->input.length())
		{
			this->input = FLOAT_TYPE;
			return ;
		}
	}
}

void Convert::convertType()
{
	switch (this->_type)
	{
	case CHAR_TYPE:
		this->char_val = this->input[0];
		this->int_val = static_cast<int>(this->char_val);
		this->float_val = static_cast<float>(this->char_val);
		this->double_val = static_cast<double>(this->char_val);
		break;
	default:
		break;
	}
}

void Convert::printType() const
{
	
	std::cout << "char: ";
	if (std::isprint(this->char_val))
		std::cout << "\'" << this->char_val << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	
	std::cout << "int: " << this->int_val << std::endl;
	std::cout << "float: " << std::fixed <<  this->float_val << "f" << std::endl;
	std::cout << "double: " << std::fixed <<  this->double_val << std::endl;
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Convert::NotValidArgumentException::what() const throw()
{
	return ("\033[31;1mInvalid argument.\033[0m");
}
