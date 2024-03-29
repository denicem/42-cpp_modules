/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:26:01 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:00:57 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat&);
	~Cat();

	Cat& operator=(const Cat&);

	void makeSound() const;
};

#endif