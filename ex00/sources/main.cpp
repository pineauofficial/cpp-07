/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:37:18 by pineau            #+#    #+#             */
/*   Updated: 2024/04/01 16:17:01 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
	int a = 1;
	int b = 2;
	double c = 1.5;
	double d = 2.5;
	std::string s1 = "chaine1";
	std::string s2 = "chaine2";

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	swap(a, b);
	swap(c, d);
	swap(s1, s2);
	std::cout << "-----SWAP-----" <<std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	
	int int_min = min(a, b);
	double double_min = min(c, d);
	std::string string_min = min(s1, s2);
	
	std::cout << "-----MIN-----" <<std::endl;
	std::cout << "int_min = " << int_min << std::endl;
	std::cout << "double_min = " << double_min << std::endl;
	std::cout << "string_min = " << string_min << std::endl;
	
	int int_max = max(a, b);
	double double_max = max(c, d);
	std::string string_max = max(s1, s2);

	std::cout << "-----MAX-----" <<std::endl;
	std::cout << "int_max = " << int_max << std::endl;
	std::cout << "double_max = " << double_max << std::endl;
	std::cout << "string_max = " << string_max << std::endl;
}
