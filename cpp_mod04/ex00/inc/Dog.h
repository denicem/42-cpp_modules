/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:23:46 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:00:47 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog&);
	~Dog();

	Dog& operator=(const Dog&);

	void makeSound() const;
};

#endif