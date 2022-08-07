/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:13:05 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 20:21:49 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.h"

#include <string>

class PresidentialPardonForm: public AForm
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm(const std::string);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm&);

	std::string getTarget() const;

	void execute(const Bureaucrat&) const;
};

#endif