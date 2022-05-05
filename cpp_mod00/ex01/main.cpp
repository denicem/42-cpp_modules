/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:11:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/05 17:30:31 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"
#include <iostream>

int main()
{
	Contact c0 = Contact("DNC", "M", "dncmon", "1234", "Pssht!");
	// c0.set_first("Denice");
	std::cout << c0.get_first() << " " << c0.get_last() << " (" << c0.get_nickname() << ") : " << c0.get_number() << " | " << c0.get_secret() << std::endl;
	return (0);
}
