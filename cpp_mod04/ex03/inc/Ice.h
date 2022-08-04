/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:50:52 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 02:55:48 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice: public AMateria
{
public:
	Ice();
	Ice(const Ice&);
	~Ice();

	Ice& operator=(const Ice&);

	std::string getType() const;
};

#endif