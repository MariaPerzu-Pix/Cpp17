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

std::string_view bad()
{
	string s = "once there";
	return {$s[5],4};
}

