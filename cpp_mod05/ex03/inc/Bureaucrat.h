/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:36:30 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 21:11:39 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "AForm.h"

#include <string>

class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat(const std::string);
	Bureaucrat(const std::string, int);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat&);

	std::string getName() const;
	int getGrade() const;

	void incGrade();
	void decGrade();
	void signForm(AForm&) const;
	void executeForm(const AForm&) const;

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif