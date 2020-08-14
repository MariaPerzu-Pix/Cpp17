/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */


#include <iostream>
#include <cstddef>


int main()
{
    std::byte b{42};
    std::cout << std::to_integer<int>(b) << "\n";

    // b *= 2 compilation error
    b <<= 1;
    std::cout << std::to_integer<int>(b) << "\n";
}

