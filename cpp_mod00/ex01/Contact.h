/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:50:03 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/05 03:50:03 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_H
#define	CONTACH_H

#include <string>

class Contact
{
private:
	std::string first;
	std::string last;
	std::string number;
	std::string secret;

public:
	Contact(std::string, std::string, std::string, std::string);

	void set_first(std::string);
	void set_last(std::string);
	void set_number(std::string);
	void set_secret(std::string);
	std::string get_first();
	std::string get_last();
	std::string get_number();
	std::string get_secret();
};

#endif