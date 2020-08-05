/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */

#include <string_view>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std::literals::string_view_literals;

std::string cat(std::string_view sv1, std::string_view sv2)
{
	std::string res((sv1.length()+sv2.length()),'*'); //makes a string res(size,inizialization)
	char* p = &res[0];
	for(char c : sv1) //for each char in sv1
		*p++ = c;  // put in res the char of sv1 and go to the next position
	std::copy(sv2.begin(), sv2.end(),p); // currently p points to rest in he position of the size of sv1, from there put all sv2 (beginning to end)
	return res;
}

int main()
{
	std::string king = "Harold ";
	auto s1 = cat(king, "William"); // string and const char*
	std::cout<< "\n"<<s1;
	auto s2 = cat(king, king);
	std::cout<< "\n"<<s2;
	auto s3 = cat("Charles ", "Philip"sv); //Note the use of the sv (“string view”) suffix. To use that we need to: using namespace std::literals::string_view_literals; lin 13
	std::cout<< "\n"<<s3;
	auto s4 = cat("David "sv, king);
	std::cout<< "\n"<<s4;
	auto s5 = cat({&king[0],2}, " Henry"sv);
	std::cout<< "\n"<<s5;

	return 0;
}



