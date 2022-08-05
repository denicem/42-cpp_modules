/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:31:13 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 17:36:13 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_H
#define MATERIA_H

#include "ICharacter.h"

#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria&);
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria& operator=(const AMateria&);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	std::string const &getType() const;
};

#endif