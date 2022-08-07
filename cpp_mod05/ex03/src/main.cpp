/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:19:11 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 22:35:11 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"
#include "../inc/AForm.h"
#include "../inc/ShrubberyCreationForm.h"
#include "../inc/RobotomyRequestForm.h"
#include "../inc/PresidentialPardonForm.h"
#include "../inc/Intern.h"

#include <iostream>

void func()
{
	try
	{
		Bureaucrat b("FABIBI", 6);
		Intern i;
		AForm* f;

		f = i.makeForm("shrubbery creation", "bonsai");
		// f = i.makeForm("robotomy request", "Bender");
		// f = i.makeForm("presidential pardon", "DNC");
		// f = i.makeForm("some form", "some target");

		std::cout << *f << std::endl;

		b.signForm(*f);
		b.executeForm(*f);

		delete f;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	func();
	system("leaks Bureaucrat");
	return (0);
}
