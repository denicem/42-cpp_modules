/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:42:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 20:45:40 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
#define SERIALIZE_H

#include "Data.h"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif