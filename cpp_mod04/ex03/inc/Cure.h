/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:54:48 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 02:56:23 by dmontema         ###   ########.fr       */
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
	~Cure();

	Cure& operator=(const Cure&);

	std::string getType() const;
};

#endif