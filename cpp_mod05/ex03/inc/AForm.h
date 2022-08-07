/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:16:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 21:29:58 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.h"

#include <string>

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool sig;
	const int gradeSign;
	const int gradeExec;

public:
	AForm();
	AForm(const AForm&);
	AForm(const std::string);
	AForm(const std::string, const int, const int);
	virtual ~AForm();

	AForm& operator=(const AForm&);

	std::string getName() const;
	bool getSig() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(const Bureaucrat&);
	bool isExecutable(const Bureaucrat&) const;
	virtual void execute(const Bureaucrat&) const = 0;

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
	class FormNotSignedException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif