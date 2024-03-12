/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:21:14 by pineau            #+#    #+#             */
/*   Updated: 2024/03/12 14:39:10 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int		tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	
	iter(tab, size, fonction);
	std::cout << std::endl;

	std::string str[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	int	size_str = 10;
	
	iter(str, size_str, fonction);
	std::cout << std::endl;

	char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int	size_c = 10;

	iter(c, size_c, fonction);
	return 0;
}