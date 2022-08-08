/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:20:54 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 21:32:28 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

AForm::AForm(): name("undefined_form"), sig(false), gradeSign(75), gradeExec(75) {}

AForm::AForm(const AForm& other): name(other.name), sig(other.sig), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const std::string name): name(name), sig(false), gradeSign(75), gradeExec(75) {}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec): name(name), sig(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw GradeTooLowException();
}


AForm::~AForm() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		this->sig = other.sig;
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSig() const
{
	return (this->sig);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int AForm::getGradeExec() const
{
	return (this->gradeExec);
}

/*
** ----------------------- METHODS -----------------------
*/

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->sig = true;
}

bool AForm::isExecutable(const Bureaucrat& b) const
{
	if (!this->sig)
		throw FormNotSignedException();
	if (b.getGrade() <= this->gradeExec)
		return (true);
	return (false);
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mGrade too High.\033[0m");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return("\033[31;1mGrade too Low.\033[0m");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return("\033[31;1mForm not signed.\033[0m");
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const AForm& f)
{
	stream << "-\nForm: " << f.getName() << std::endl;
	stream << "- Signed: " << (f.getSig() ? "true" : "false") << std::endl;
	stream << "- Grade required to sign: " << f.getGradeSign() << std::endl;
	stream << "- Grade required to execute: " << f.getGradeExec();
	return (stream);
}