/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:19:11 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/06 19:04:13 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"

#include <iostream>

int main()
{
	try
	{

		Bureaucrat b("FABIBI", 0);
		// Bureaucrat b("FABIBI", 160);

		// Bureaucrat b ("FABIBI", 2);
		// b.incGrade();
		// b.incGrade();
		// std::cout << b << std::endl;

		// Bureaucrat b("FABIBI", 148);
		// b.decGrade();
		// b.decGrade();
		// b.decGrade();
		// std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}