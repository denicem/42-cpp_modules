/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:43:20 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/06 19:17:04 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"

#include <iostream>
#include <string>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Bureaucrat::Bureaucrat(): name("no name"), grade(75)
{
	std::cout << "Bureaucrat no name created (Default).\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->name <<  " created (Copy).\n";
}

Bureaucrat::Bureaucrat(const std::string name): name(name), grade(75)
{
	std::cout << "Bureaucrat " << this->name <<  " created (str).\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->name <<  " created (str, int).\n";
}


Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name <<  " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

/*
** ----------------------- METHODS -----------------------
*/

void Bureaucrat::incGrade()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decGrade()
{
	if (this->grade < 150)
		this->grade++;
	else
		throw GradeTooLowException();
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mGrade too High.\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("\033[31;1mGrade too Low.\033[0m");
}
/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& b)
{
	stream << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (stream);
}