/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:36:30 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 21:17:37 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat&);

	std::string getName();
	int getGrade();

	// NOTE: incrementing bt decrementing the value, because 1 is the highest and 150 the lowest.
	void incGrade();
	void decGrade();
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif