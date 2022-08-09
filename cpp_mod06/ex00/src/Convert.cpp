/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:21:34 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 19:20:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.h"

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Convert::Convert(): input("undefined") {}
Convert::Convert(const Convert& other): input(other.input), val(other.val)
{
	this->setVal();
}
Convert::Convert(std::string input): input(input)
{
	this->setVal();
}

Convert::~Convert() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Convert& Convert::operator=(const Convert& other)
{
	if (this != &other)
	{
		this->val = other.val;
		this->input = other.input;
	}
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

double Convert::getVal() const
{
	return (this->val);
}

void Convert::setVal()
{
	if (this->isCharType())
		this->val = static_cast<double>(this->input[0]);
	else
		this->val = std::strtod(input.c_str(), NULL);
}

/*
** ----------------------- METHODS -----------------------
*/

bool Convert::isCharType() const
{
	if (this->input.length() == 1 && std::isalpha(this->input[0]))
		return (true);
	int i = 0;
	if (this->input[0] == '+' || this->input[0] == '-')
		i++;
	if (!isFloatType() && !isDoubleType() && !isPseudoLiteral())
	{
		for (; this->input[i]; i++)
			if (!std::isdigit(this->input[i]))
				throw NotValidArgumentException();
	}
	return (false);
}

bool Convert::isFloatType() const
{
	if (!isDoubleType())
		return (false);
	std::string::size_type pos = this->input.find('f');
	if (pos == std::string::npos)
		return (false);
	if (pos + 1 != this->input.length() && pos >= 3)
		return (false);
	return (true);
}

bool Convert::isDoubleType() const
{
	std::string::size_type pos = this->input.find('.');
	if (pos == std::string::npos || this->input.find('.', pos + 1) != std::string::npos)
		return (false);
	return (true);
}

bool Convert::isPseudoLiteral() const
{
	if (this->input == "inf" || this->input == "+inf" || this->input == "-inf" || this->input == "nan" || 
		this->input == "inff" || this->input == "+inff" || this->input == "-inff" || this->input == "nanf")
		return (true);
	return (false);
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Convert::NotValidArgumentException::what() const throw()
{
	return ("\033[31;1mInvalid argument.\033[0m");
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const Convert& conv)
{
	double val = conv.getVal();

	// CHAR
	stream << "char: ";
	if (val < 0.0 || val > 255.0 || conv.isPseudoLiteral())
		stream << "Impossible." << std::endl;
	else if (!std::isprint(static_cast<int>(val)))
		stream << "Non displayable." << std::endl;
	else
		stream << "\'" << static_cast<char>(val) << "\'" << std::endl;
	
	// INT
	stream << "int: ";
	if (val < static_cast<double>(INT_MIN) || val > static_cast<double>(INT_MAX) || conv.isPseudoLiteral())
		stream << "Impossible." << std::endl;
	else
		stream << static_cast<int>(val) << std::endl;
	
	// FLOAT
	stream << "float: ";
	stream << std::fixed << std::setprecision(2) << static_cast<float>(val) << "f" << std::endl;

	// DOUBLE
	stream << "double: ";
	stream << std::fixed << std::setprecision(2) << val << std::endl;

	return (stream);
}
