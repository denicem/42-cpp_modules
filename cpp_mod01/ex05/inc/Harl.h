/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:40:57 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/05 00:09:53 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#define RED		"\033[31;1m"
#define YELLOW	"\033[33;1m"
#define BLUE	"\033[34;1m"
#define CYAN	"\033[36;1m"
#define RESET	"\033[0m"

#include <string>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl();
	void complain(std::string);
};

#endif