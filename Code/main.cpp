/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */


#include <iostream>
#include <cassert>
#include <filesystem>


int main(int argc, char* argv[])
{
	if (argc <2) {
		std::cerr<<"arguments expected\n";
		return 1;
	}

    std::filesystem::path p {argv[1]}; //create a path from command line

    assert(std::filesystem::exists(p));

    if (std::filesystem::is_regular_file(p))
   	std::cout << p << " is a file; its size is "<< std::filesystem::file_size(p)<< '\n';

    return 0;
}

