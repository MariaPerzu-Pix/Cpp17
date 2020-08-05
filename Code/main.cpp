/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */

#include <optional>
#include <iostream>

int main()
{
	std::optional<int> i;

	if (i)
    	std::cout<< "Filled" <<std::endl;
	else
    	std::cout<< "Empty" <<std::endl;
    return 0;
}



