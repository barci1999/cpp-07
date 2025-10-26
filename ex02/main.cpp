/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:08:47 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/26 16:40:56 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>


#ifndef _COLORS
# define _COLORS

# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"

#endif // !_COLORS

int main(void)
{
    std::cout << BLUE "INT TEST\n" NC;
    try
    {   
        Array<int> a(10); // tamaño 10
        for (unsigned int i = 0; i < a.size(); i++){
            a[i] = i + 1;
            std::cout <<"Array["<<i<<"]-> " <<a[i] << std::endl;
        }
        std::cout << "size: " << a.size() << std::endl;

        // FORZAR EXCEPCIÓN
        std::cout << RED "Accessing out-of-bounds index...\n" NC;
        a[20] = 42; // índice fuera de rango
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Exception caught: " << e.what() << NC << std::endl;
    }

    std::cout << BLUE "\nDOUBLE TEST\n" NC;
    try
    {   
        Array<double> a(10);
        for (unsigned int i = 0; i < a.size(); i++){
            a[i] = i + 0.5;
            std::cout <<"Array["<<i<<"]-> " <<a[i] << std::endl;
        }
        std::cout << "size: " << a.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Exception caught: " << e.what() << NC << std::endl;
    }

    std::cout << BLUE "\nCHAR TEST\n" NC;
    try
    {   
        Array<char> a(10);
        for (unsigned int i = 0; i < a.size(); i++){
            a[i] = i + 65;
            std::cout <<"Array["<<i<<"]-> " <<a[i] << std::endl;
        }
        std::cout << "size: " << a.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Exception caught: " << e.what() << NC << std::endl;
    }

    std::cout << BLUE "\nCOPY TEST\n" NC;
    try
    {   
        Array<char> a(10);
        for (unsigned int i = 0; i < a.size(); i++){
            a[i] = i + 65;
        }

        Array<char> b = a; // constructor de copia

        // Modificar 'a' para verificar deep copy
        for (unsigned int i = 0; i < a.size(); i++){
            a[i] = a[i] + 1;
            std::cout << "a: " << a[i] << " | b: " << b[i] << std::endl;
        }

        std::cout << "size a: " << a.size() << ", size b: " << b.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Exception caught: " << e.what() << NC << std::endl;
    }

    return 0;
}