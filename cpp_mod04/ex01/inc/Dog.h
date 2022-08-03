/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:23:46 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 01:22:16 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal
{
private:
	Brain* brain;

public:
	Dog();
	Dog(const Dog&);
	~Dog();

	Dog& operator=(const Dog&);

	void makeSound() const;

	std::string getBrain(unsigned);
	void setBrain(unsigned, std::string);
};

#endif