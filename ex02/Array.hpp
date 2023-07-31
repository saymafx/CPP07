/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:54:42 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:54:42 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <ostream>

template <typename T>
class Array {
	
	public:
		Array();
		Array(unsigned int const n);
		Array(const	Array &cpy);
		~Array();

		unsigned int size() const;
		
		Array& operator=(const Array &rhs);
		T& operator[](unsigned int index);

		class OutOfBounds : public std::exception {
			public:
				virtual const char* what() const throw ();
		};

	private:
		T*				_array;
		unsigned int	_size;
};

#include "Array.tpp"
