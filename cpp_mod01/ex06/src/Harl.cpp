/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:48:40 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/05 00:11:22 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"
#include <iostream>

Harl::Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int nLevel = 0;

	for (; nLevel < 4; nLevel++)
	{
		if (!lvl[nLevel].compare(level))
			break ;
	}
	switch (nLevel)
	{
	case 0:
		std::cout << "[DEBUG]\n";
		(this->*func[nLevel++])();
	case 1:
		std::cout << "[INFO]\n";
		(this->*func[nLevel++])();
	case 2:
		std::cout << "[WARNING]\n";
		(this->*func[nLevel++])();
	case 3:
		std::cout << "[ERROR]\n";
		(this->*func[nLevel++])();
		break ;
	default:
		std::cout << "[Probably complaining about insignificant problems]\n";
		break;
	}
	
}
