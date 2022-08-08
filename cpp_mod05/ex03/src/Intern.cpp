/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:09:55 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 22:26:26 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.h"
#include "../inc/AForm.h"
#include "../inc/ShrubberyCreationForm.h"
#include "../inc/RobotomyRequestForm.h"
#include "../inc/PresidentialPardonForm.h"

#include <string>
#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Intern::Intern() {}
Intern::Intern(const Intern&) {}

Intern::~Intern() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Intern& Intern::operator=(const Intern& other)
{
	(void) other;
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

AForm* Intern::makeForm(std::string form, std::string target)
{
	AForm* res;
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int opt = 0;

	for (; opt < 3 && form != forms[opt]; opt++);

	switch (opt)
	{
		case SHRUBBERYCREATION:
			res = new ShrubberyCreationForm(target);
			break ;
		case ROBOTOMYREQUEST:
			res = new RobotomyRequestForm(target);
			break ;
		case PRESIDENTIALPARDON:
			res = new PresidentialPardonForm(target);
			break ;
		default:
			throw FormNotFoundException();
	}
	std::cout << "Intern creates " << form << "." << std::endl;
	return (res);
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("\033[31;1mForm type not found.\033[0m");
}
