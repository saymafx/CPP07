/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:54:01 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:54:01 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstddef>

template <typename T, typename Func>
void iter(T* array, size_t length, Func func) {
    for(size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

template <typename T>
void printit(T element) {
    std::cout << element << std::endl;
}
