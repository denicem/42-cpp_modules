/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:31:13 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 02:52:11 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_H
#define MATERIA_H

#include "ICharacter.h"

#include <string>

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria&);
	AMateria(std::string const & type);
	~AMateria();

	AMateria& operator=(const AMateria&);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	std::string const &getType() const;
};

#endif