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
    std::variant<int,double, std::string, bool> myVar;

    myVar =50.01;
    auto x1 = std::get<double>(myVar);
    int id = myVar.index();
    std::cout<<"variant double "<< x1<<"          myVar.index(): " <<id<<std::endl;

    myVar = std::string("margaritas para todos");
    auto x2 = std::get<2>(myVar);
    id = myVar.index();
    std::cout<<"variant string "<< x2 << "          myVar.index(): " <<id<<std::endl;

    if(std::holds_alternative<int>(myVar))
    	{
    	   std::cout<<"current alternative is int"<<std::endl;
    	}
    else
       {
    	std::cout<<"current alternative is NOT int"<<std::endl;
       }


    return 0;

}



