/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:15:29 by pineau            #+#    #+#             */
/*   Updated: 2024/03/12 14:16:37 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T&b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T &a, T &b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(T &a, T &b) {
	if (a > b)
		return a;
	return b;
}

#endif