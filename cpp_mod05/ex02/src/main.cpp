/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:19:11 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 21:37:38 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"
#include "../inc/AForm.h"
#include "../inc/ShrubberyCreationForm.h"
#include "../inc/RobotomyRequestForm.h"
#include "../inc/PresidentialPardonForm.h"

#include <iostream>

int main()
{
	try
	{
		Bureaucrat b("FABIBI", 6);
		ShrubberyCreationForm tree("Bonsai");
		// RobotomyRequestForm robot("Tron");
		// PresidentialPardonForm president("DNC");

		// std::cout << president << std::endl;

		b.signForm(tree);
		b.executeForm(tree);
		// b.signForm(robot);
		// b.executeForm(robot);
		// b.signForm(president);
		// b.executeForm(president);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
