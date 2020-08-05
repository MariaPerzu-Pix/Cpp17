/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */

#include <any>
#include <iostream>

std::any compose_message(std::string inp)
{
	std::string ok = "all right";
	int nu = 404;
	if(inp=="problem")
		return nu;
	else
		return ok;
}

int main()
{
	std::string name = " ";
	std::cout<< "Enter a name" <<std::endl;
	std::cin>>name;

	auto m = compose_message(name);
    std::cout<< std::any_cast<std::string>(m) <<std::endl;
    return 0;
}



