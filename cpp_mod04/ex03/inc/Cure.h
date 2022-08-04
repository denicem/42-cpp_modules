/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:54:48 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 17:41:37 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure: public AMateria
{
public:
	Cure();
	Cure(const Cure&);
	Cure(std::string const & type);
	~Cure();

	Cure& operator=(const Cure&);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif