/*
 * main.cpp
 *
 *  Created on: Aug 3, 2020
 *      Author: mariapa
 */

#include <iostream>
int main()
{
	union data2{
		int length;
		float width;
	};

	data2 size;
	size.length =5;


	std::cout<<"value is" <<size.width << std::endl;
}




