/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:38:03 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/26 16:31:03 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->_array = NULL;
	this->_size = 0;
}
template <typename T>
Array<T>::Array(unsigned int size)
{
	if (size == 0)
	{
		this->_array = NULL;	
	}
	else
		this->_array = new T[size];
	this->_size = size;
}
template <typename T>
Array<T>::Array(const Array<T>& other)
{
	if (other._size == 0)
	{
		this->_array = NULL;
	}
	else
	{
		this->_array = new T[other._size];
		for (size_t i = 0; i < other._size; i++)
		{
			this->_array[i] = other._array[i];
		}
	}
	this->_size = other._size;
}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this == &other)
	{
		return *this;
	}
	this->_size = other._size;
	delete [] this->_array;
	if (this->_size == 0)
	{
		this->_array = NULL;
	}
	else
	{
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
		{
			this->_array[i] = other._array[i];
		}
	}
	return *this;
}
template <typename T>
Array<T>::~Array()
{
	if (this->_array)
	{
		delete [] this->_array;
	}
}
template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw OutOfBoundsException();
	return this->_array[index];
	
} 
template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw OutOfBoundsException();
	return this->_array[index];
} 