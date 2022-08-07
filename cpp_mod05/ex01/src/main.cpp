/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:19:11 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 18:44:45 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"

#include <iostream>

int main()
{
	try
	{
		Bureaucrat b("FABIBI", 5);
		// b.incGrade();
		// Form f("Tabletennis application form", 0, 4);
		// Form f("Tabletennis application form", 4, 179);
		Form f("Tabletennis application form", 4, 4);
		b.signForm(f);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
