/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:12:17 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 20:57:55 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.h"

#include <string>

class RobotomyRequestForm: public AForm
{
private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm(const std::string);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm&);

	std::string getTarget() const;

	void execute(const Bureaucrat&) const;
};

#endif