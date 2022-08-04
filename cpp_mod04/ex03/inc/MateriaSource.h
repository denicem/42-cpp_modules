/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:35:51 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 23:37:32 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include "IMateriaSource.h"
#include "AMateria.h"

#include <string>

class MateriaSource: public IMateriaSource
{
private:
	AMateria *inv[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource&);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif