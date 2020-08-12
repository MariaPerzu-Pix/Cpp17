/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */


#include <iostream>
#include <filesystem>

void print_directory(std::filesystem::path p)
try
{
	if(std::filesystem::is_directory(p))
	{
		std::cout<<p<< ":\n";
		for(const std::filesystem::directory_entry& x : std::filesystem::directory_iterator{p})
			std::cout<< "  "<< x.path() << '\n';
	}
}
catch (const std::filesystem::filesystem_error& ex) {
	std::cerr<<ex.what()<< '\n';
}

int main()
{
    print_directory("."); // current directory
    print_directory(".."); //parent directory
    print_directory("/"); //linux root directory
    return 0;
}

