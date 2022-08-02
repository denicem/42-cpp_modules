/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:13:04 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:02:00 by dmontema         ###   ########.fr       */
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
	virtual ~Animal();

	Animal& operator=(const Animal&);

	virtual void makeSound() const;

	std::string getType() const;
	void setType(std::string);
};

#endif