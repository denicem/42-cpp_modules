/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:14:56 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 20:16:22 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap
{
protected:
	std::string name;
	int hp, ep, ad;

public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap(std::string);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap&);

	void attack(const std::string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	std::string getName() const;
	int getHP() const;
	int getEP() const;
	int getAD() const;

	void setName(std::string);
	void setHP(int);
	void setEP(int);
	void setAD(int);
};

std::ostream& operator<<(std::ostream&, const ClapTrap&);

#endif