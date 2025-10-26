/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:16:57 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/26 16:45:03 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>

template <typename T>
class Array
{
private:
	T* _array;
	unsigned int _size;
public:
	Array(/* args */);
	Array(unsigned int size);
	Array(const Array<T>& other);
	Array<T>& operator=(const Array& other);
	~Array();
	
	class OutOfBoundsException: public std::exception {
                public:
                        const char* what() const throw(){
                                return ("Index out of bounds\n");
                        }
        };

	unsigned int size() const;
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
};
#include "Array.tpp"
#endif