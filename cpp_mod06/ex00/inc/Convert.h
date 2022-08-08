/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:20:48 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/08 23:04:54 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <string>

class Convert
{
private:
	enum type {NO_TYPE = -1, CHAR_TYPE, INT_TYPE, FLOAT_TYPE, DOUBLE_TYPE};

	std::string input;
	type _type;
	char char_val;
	int int_val;
	float float_val;
	double double_val;
	bool determined, converted;

public:
	Convert();
	Convert(const Convert&);
	Convert(std::string);
	~Convert();

	Convert& operator=(const Convert&);

	void determineType();
	void convertType();
	void printType() const;
	
	class NotValidArgumentException: public std::exception
	{
		const char* what() const throw();
	};
};

#endif