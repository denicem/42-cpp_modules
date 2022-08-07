/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:16:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 18:06:56 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"

#include <string>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool sig;
	const int gradeSign;
	const int gradeExec;

public:
	Form();
	Form(const Form&);
	Form(const std::string);
	Form(const std::string, const int, const int);
	~Form();

	Form& operator=(const Form&);

	std::string getName() const;
	bool getSig() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(const Bureaucrat&);

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif