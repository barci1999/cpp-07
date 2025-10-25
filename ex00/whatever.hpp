/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:20:06 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/25 14:53:42 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
template <typename T> void swap(T& a ,T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <typename T> T min(T const &a, T const &b)
{
	if (a < b)
		return(a);
	return(b);
	
}
template <typename T> T max(T const &a,T const &b)
{
	if (a > b)
	{
		return(a);
	}
	return(b);
}

# endif