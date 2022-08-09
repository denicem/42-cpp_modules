/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:06:59 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 22:56:29 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T* arr;
	unsigned int _size;

public:
	Array(): _size(0) {}
	Array(const Array& other): _size(other.size)
	{
		for (int i = 0; this->arr[i] && other.arr[i]; i++)
				this->arr[i] = other.arr[i];
	}
	Array(unsigned int n): _size(n) {
		this->arr = new T[n];
	}
	~Array() { delete[] arr; }

	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			this->_size = other._size;
			for (int i = 0; this->arr[i] && other.arr[i]; i++)
				this->arr[i] = other.arr[i];
		}
		return (*this);
	}

	T& operator[](unsigned int idx)
	{
		if (idx > this->_size)
			throw std::out_of_range("Index out of range.");
		return (this->arr[idx]);
	}

	int size() const { return (this->_size); }
};

#endif