/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:26:01 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 01:22:10 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
private:
	Brain* brain;

public:
	Cat();
	Cat(const Cat&);
	~Cat();

	Cat& operator=(const Cat&);

	void makeSound() const;

	std::string getBrain(unsigned);
	void setBrain(unsigned, std::string);
};

#endif