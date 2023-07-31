/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:54:07 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:54:07 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, sizeof(intArray) / sizeof(int), printit<int>);

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(doubleArray, sizeof(doubleArray) / sizeof(double), printit<double>);

    std::string stringArray[] = {"Hello", "World", "!"};
    iter(stringArray, sizeof(stringArray) / sizeof(std::string), printit<std::string>);

    return 0;
}