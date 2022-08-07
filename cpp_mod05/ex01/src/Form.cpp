/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:20:54 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 18:39:15 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Form::Form(): name("no name"), sig(false), gradeSign(75), gradeExec(75) {}

Form::Form(const Form& other): name(other.name), sig(other.sig), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const std::string name): name(name), sig(false), gradeSign(75), gradeExec(75) {}

Form::Form(const std::string name, const int gradeSign, const int gradeExec): name(name), sig(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw GradeTooLowException();
}


Form::~Form() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		this->sig = other.sig;
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSig() const
{
	return (this->sig);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExec() const
{
	return (this->gradeExec);
}

/*
** ----------------------- METHODS -----------------------
*/

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->sig = true;
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mGrade too High.\033[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("\033[31;1mGrade too Low.\033[0m");
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const Form& f)
{
	stream << "-\nForm:\n";
	stream << "-Signed: " << f.getSig() << std::endl;
	stream << "-Grade Signed: " << f.getGradeSign() << std::endl;
	stream << "-Grade Exec: " << f.getGradeExec();
	return (stream);
}