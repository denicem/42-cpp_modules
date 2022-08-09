/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:17:47 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 19:20:34 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <string>
#include <iostream>

class Convert
{
private:
	std::string input;
	double val;

	Convert();

	bool isCharType() const;
	bool isFloatType() const;
	bool isDoubleType() const;

	void setVal();

public:
	Convert(const Convert&);
	Convert(std::string);
	~Convert();

	Convert& operator=(const Convert&);

	double getVal() const;

	bool isPseudoLiteral() const;

	class NotValidArgumentException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const Convert&);

#endif