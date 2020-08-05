/*
 * main.cpp
 *
 *  Created on: Aug 3, 2020
 *      Author: mariapa
 */

#include <optional>
#include <iostream>

   std::optional<std::string> compose_message(std::string inp)
    {
    	std::string mess ="all right";
    	if(inp == "problem")
    		return {};
    	return mess;
    }

int main()
{
	std::string n =" ";
	std::cout<<"Enter a name"<<std::endl;
	std::cin>>n;

    if (auto m = compose_message(n))
    	std::cout<< *m <<std::endl; //note the dereference (*)
    else {
    	std::cout<< "there was a problem" <<std::endl; //handle
    }

    return 0;

}



