/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:21:25 by pineau            #+#    #+#             */
/*   Updated: 2024/03/12 14:39:14 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int size, void (*f)(T const &)) {
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	fonction(T const &i) {
	std::cout << i ;
}

#endif