/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:03:39 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 22:23:23 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.h"

#include <string>

class Intern
{
private:
	enum {SHRUBBERYCREATION, ROBOTOMYREQUEST, PRESIDENTIALPARDON};

public:
	Intern();
	Intern(const Intern&);
	~Intern();

	Intern& operator=(const Intern&);

	AForm* makeForm(std::string, std::string);

	class FormNotFoundException: public std::exception
	{
		const char* what() const throw();
	};
};

#endif