/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:11:21 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:11:51 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat&);
	~WrongCat();

	WrongCat& operator=(const WrongCat&);

	void makeSound() const;
};

#endif