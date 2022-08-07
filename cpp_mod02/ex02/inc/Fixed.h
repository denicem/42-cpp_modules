/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:25:12 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/27 17:01:34 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <ostream>

class Fixed
{
private:
	int val;
	static const int fract_bits = 8;

public:
	Fixed();
	Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
	~Fixed();

	Fixed& operator=(const Fixed&);
	bool operator==(const Fixed&) const;
	bool operator!=(const Fixed&) const;
	bool operator<(const Fixed&) const;
	bool operator<=(const Fixed&) const;
	bool operator>(const Fixed&) const;
	bool operator>=(const Fixed&) const;
	Fixed operator+(const Fixed&);
	Fixed operator-(const Fixed&);
	Fixed operator*(const Fixed&);
	Fixed operator/(const Fixed&);
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	int getRawBits() const;
	void setRawBits(int const raw);

	int toInt() const;
	float toFloat() const;

	static Fixed& min(Fixed&, Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif