/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:21:55 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 21:23:11 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_ABC_H
#define BASE_ABC_H

class Base
{
public:
	virtual ~Base() {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif