/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:54:47 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:54:47 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _array(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int num) : _array(new T[num]()), _size(num) {}

template <typename T>
Array<T>::Array(const Array &cpy) {
	_size = cpy._size;
	_array = new T[_size]();
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = cpy._array[i];
	}
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}
	
template <typename T>
Array<T>& Array<T>::operator=(const Array &rhs) {
	if (this != &rhs) {
		_size = rhs._size;
		delete[] _array;
		_array = new T[_size]();
		if(rhs._array) {
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = rhs._array[i];
			}
		}
	}
	return *this;
}

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw() {
	return "Array index is out of bounds";
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index < _size) {
		return _array[index];
	}
	else
		throw OutOfBounds();
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}
