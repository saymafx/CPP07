/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:53:50 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:53:50 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <iostream>
#include <ostream>

template <typename T>
void	swap(T &a, T &b) {
	T	c = a;
	a = b;
	b = c;
}

template <typename T>
const T		&min(const T &a, const T &b) {
	return ((a > b) ? b : a);
}

template <typename T>
const T		&max(const T &a, const T &b) {
	return ((a > b)? a : b);
}