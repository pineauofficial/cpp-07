/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:37:18 by pineau            #+#    #+#             */
/*   Updated: 2024/03/12 14:18:22 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
	int a = 1;
	int b = 2;
	double c = 1.5;
	double d = 2.5;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(a, b);
	swap(c, d);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << std::endl;
	
	int int_min = min(a, b);
	double double_min = min(c, d);
	
	std::cout << "int_min = " << int_min << std::endl;
	std::cout << "double_min = " << double_min << std::endl;
	std::cout << std::endl;
	
	int int_max = max(a, b);
	double double_max = max(c, d);

	std::cout << "int_max = " << int_max << std::endl;
	std::cout << "double_max = " << double_max << std::endl;
}

