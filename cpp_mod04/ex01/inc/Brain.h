/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:34:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:39:21 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain&);
	~Brain();

	Brain& operator=(const Brain&);
};

#endif