/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:13:04 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 02:24:59 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal&);
	virtual ~Animal() = 0; // NOTE: not all funcs should be virtual, one is enough to make it an abtract class

	Animal& operator=(const Animal&);

	virtual void makeSound() const;

	virtual std::string getType() const;
	void setType(std::string);
};

#endif