/*
 * main.cpp
 *
 *  Created on: Aug 3, 2020
 *      Author: mariapa
 */

#include <variant>
#include <iostream>

int main()
{
    std::variant<int, float> size;

    size = 5;

    std::cout<<"int value is "<< std::get<int>(size)<<std::endl;

}

