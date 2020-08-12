/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */


#include <iostream>
#include <cassert>
#include <filesystem>


int main()
{
    std::filesystem::path f ="FileSystem_add/fs.cpp";
    assert(std::filesystem::exists(f));

    if (std::filesystem::is_regular_file(f))
   	std::cout << f << " is a file; its size is "<< std::filesystem::file_size(f)<< '\n'; //The size of the file, in bytes.

    return 0;
}

