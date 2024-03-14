/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                   #include <cstdlib>                             +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:42:59 by pineau            #+#    #+#             */
/*   Updated: 2024/03/13 17:58:20 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <typename T>
class Array {
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const & src);
		~Array(void);
		Array<T> & operator=(Array<T> const & rhs);

		int size(void) const;
		T & operator[](unsigned int n);
		
		class OutOfRangeException : public std::exception {
			public:
				const char * what() const throw() 
				{
					return "Index out of range";
				}
		};
		
	private:
		T *_array;
		size_t _size;
	
};

template <typename T>
Array<T>::Array(void) {
	this->_array = new T[0];
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	this->_array = new T[n];
	this->_size = n;
	for(size_t i = 0; i < n; i++)
		this->_array[i] = T();
}

template <typename T>
Array<T>::Array(Array<T> const & src) {
	this->_size = src.size();
	this->_array = new T[this->_size];
	for(size_t i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs) {
	if (_array)
		delete [] this->_array;
	this->_size = rhs.size();
	this->_array = new T[this->_size];
	for(size_t i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}

template <typename T>
T & Array<T>::operator[](unsigned int n) {
	if (n >= this->_size)
		throw OutOfRangeException();
	return this->_array[n];
}

template <typename T>
int Array<T>::size(void) const {
	return this->_size;
}

#endif