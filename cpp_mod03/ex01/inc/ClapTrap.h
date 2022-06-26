/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:14:56 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/26 21:33:33 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap
{
private:
	std::string name;
	int hp, ep, ad;
public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap&);

	ClapTrap(std::string);

	void attack(const std::string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	std::string getName();
	int getHP();
	int getEP();
	int getAD();

	void setName(std::string);
	void setHP(int);
	void setEP(int);
	void setAD(int);
};

#endif