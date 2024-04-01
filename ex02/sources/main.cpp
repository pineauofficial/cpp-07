/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:42:43 by pineau            #+#    #+#             */
/*   Updated: 2024/04/01 17:15:05 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    std::cout << "Test construction with no parameter" << std::endl;
    Array<int> arr1;
    std::cout << "Size of arr1: " << arr1.size() << std::endl;
    std::cout << std::endl;
    std::cout << "Test construction with a parameter" << std::endl;
    Array<int> arr2(5);
    std::cout << "Size of arr2: " << arr2.size() << std::endl;
    std::cout << std::endl;
    std::cout << "Test copy constructor" << std::endl;
    Array<int> arr3 = arr2;
    std::cout << "Size of arr3 (copy of arr2): " << arr3.size() << std::endl;
    std::cout << std::endl;
    std::cout << "Test assignment operator" << std::endl;
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "Size of arr4 (assigned from arr2): " << arr4.size() << std::endl;
    std::cout << std::endl;
    std::cout << "Test modifying a copy doesn't affect the original" << std::endl;
    arr3[0] = 10;
    std::cout << "arr3[0]: " << arr3[0] << ", arr2[0]: " << arr2[0] << std::endl;
    std::cout << std::endl;
    std::cout << "Test modifying the original doesn't affect the copy" << std::endl;
    arr2[1] = 20;
    std::cout << "arr2[1]: " << arr2[1] << ", arr3[1]: " << arr3[1] << std::endl;
    std::cout << std::endl;
    std::cout << "Test accessing elements through subscript operator" << std::endl;
    for (unsigned int i = 0; i < static_cast<unsigned int>(arr2.size()); ++i) {
        std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Test out of bounds access" << std::endl;
    try {
        std::cout << "Attempting to access arr2[10]: ";
        std::cout << arr2[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
