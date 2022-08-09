/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:08:19 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 22:06:03 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.h"

#include <iostream>
#include <cstdlib>
#include <time.h>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45), target("undefined_target") {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other), target(other.target) {}
RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		this->target = other.target;
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

/*
** ----------------------- METHODS -----------------------
*/

void RobotomyRequestForm::execute(const Bureaucrat& executer) const
{
	if (!this->isExecutable(executer))
		throw GradeTooLowException();
	srand(time(0));
	int nbr = rand() % 10 + 1;
	if (nbr % 2 == 0)
		std::cout << this->target << " has been succesfully robotomized." << std::endl;
	else
		std::cout << "Robotomy failed for " << this->target << "." << std::endl;
	// std::cout << nbr << std::endl;
}

/*
** ----------------------- CLASS ATTRIBUTES -----------------------
*/

/*
** ----------------------- CLASS METHODS -----------------------
*/

/*
** ----------------------- FUNCS -----------------------
*/