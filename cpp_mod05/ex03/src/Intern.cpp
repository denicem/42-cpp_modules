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
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int opt = 0;

	for (; opt < 3; opt++)
		if (form == forms[opt])
			break ;
	switch (opt)
	{
	case SHRUBBERYCREATION:
		return (new ShrubberyCreationForm(target));
	case ROBOTOMYREQUEST:
		return (new RobotomyRequestForm(target));
	case PRESIDENTIALPARDON:
		return (new PresidentialPardonForm(target));
	default:
		throw FormNotFoundException();
	}
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("\033[31;1mForm type not found.\033[0m");
}