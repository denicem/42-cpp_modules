/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:06:59 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 04:06:59 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <exception>

template <typename T>
class Array
{
private:
	T arr[];
	int size;

public:
	Array(): size(0) {}
	Array(const Array& other): size(other.size)
	{
		for (int i = 0; this->arr[i] && other.arr[i]; i++)
				this->arr[i] = other.arr[i];
	}
	Array(unsigned int n): size(n) {
		this.arr = new T[n];
	}
	~Array() { delete[] arr; }

	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			this->size = other.size;
			for (int i = 0; this->arr[i] && other.arr[i]; i++)
				this->arr[i] = other.arr[i];
		}
		return (*this);
	}

	Array& operator[](unsigned int idx)
	{
		if (!this->arr[idx])
			throw std::out_of_range("Index out of range.");
		return (this->arr[idx]);
	}

	int size() const { return (size); }
};

#endif