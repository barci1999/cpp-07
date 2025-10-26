/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:54:26 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/25 16:51:45 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void increment(int &x)
{
    ++x;
}

template<typename T>
void doubleValue(T &x)
{
    x = x + x;
}
template<typename T>
void printValue(const T &x)
{
    std::cout << x << " ";
}

template<>
void doubleValue<std::string>(std::string &s)
{
    s += " " + s;
}
void printString(const std::string &s)
{
    std::cout << s << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    std::string strArr[] = {"hello", "world", "42"};

    std::cout << "Original int array: ";
    ::iter(arr, 4, &printValue<int>);
    std::cout << "\nAfter increment: ";
    ::iter(arr, 4, &increment);
    ::iter(arr, 4, &printValue<int>);

    std::cout << "\nAfter doubleValue: ";
    ::iter(arr, 4, &doubleValue<int>);
    ::iter(arr, 4, &printValue<int>);


    std::cout << "\n\nOriginal string array: ";
    ::iter(strArr, 3, &printString);
    std::cout << "\nAfter doubleValue: ";
    ::iter(strArr, 3, doubleValue<std::string>);
    ::iter(strArr, 3, &printString);



	std::cout << "\n\n--- Testing with const arrays ---\n";
    const int constArr[] = {10, 20, 30, 40, 50};
    const std::string constStrArr[] = {"const", "array", "test"};

    std::cout << "Const int array: ";
    ::iter(constArr, 5, &printValue<int>);
    
    std::cout << "\nConst string array: ";
    ::iter(constStrArr, 3, &printValue<std::string>);

    std::cout << std::endl;
    return 0;
}