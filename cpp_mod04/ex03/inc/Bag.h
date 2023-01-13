/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bag.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:58:17 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/13 17:58:20 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BAG_H
#define BAG_H

#include "AMateria.h"

class Bag
{
private:
	AMateria *materia[4];

public:
	Bag();
	Bag(const Bag&);
	~Bag();

	Bag& operator=(const Bag&);

	void addMateria(AMateria*);
};

#endif