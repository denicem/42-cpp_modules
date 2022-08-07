/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:48:12 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 21:14:46 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.h"

#include <iostream>
#include <fstream>

/*
** ----------------------- PRIVATE METHODS -----------------------
*/

void ShrubberyCreationForm::createTree() const
{
	std::ofstream outfile(target + "_shrubbery");
	if (outfile.is_open())
	{
		outfile << "                                  # #### ####" << std::endl;
		outfile << "                                ### \\/#|### |/####" << std::endl;
		outfile << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
		outfile << "                             ###  \\/###|/ \\/ # ###" << std::endl;
		outfile << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		outfile << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
		outfile << "                           __#_--###`  |{,###---###-~" << std::endl;
		outfile << "                                     \\ }{" << std::endl;
		outfile << "                                      }}{" << std::endl;
		outfile << "                                      }}{" << std::endl;
		outfile << "                                 ejm  {{}" << std::endl;
		outfile << "                                , -=-~{ .-^- _" << std::endl;
		outfile << "                                      `}" << std::endl;
		outfile << "                                       {" << std::endl;
		outfile.close();
	}
}

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shruberry Creation Form", 145, 137), target("undefined_target") {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other), target(other.target) {}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("Shruberry Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		this->target = other.target;
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

/*
** ----------------------- METHODS -----------------------
*/

void ShrubberyCreationForm::execute(const Bureaucrat& executer) const
{
	if (!this->isExecutable(executer))
		throw GradeTooLowException();
	this->createTree();
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