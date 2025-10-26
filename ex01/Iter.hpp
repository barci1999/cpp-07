/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:45:45 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/25 17:06:22 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
template <typename T>void f(T a)
{
	std::cout << a << std::endl;
}
template <typename T, typename F>
void iter(T* array, const size_t length,const F& func)
{
	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
	
}
#endif