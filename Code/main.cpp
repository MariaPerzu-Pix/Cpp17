/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */


#include <iostream>
#include <functional>

struct S
{
	const int j = 5;
	int do_something(const int i)
	{
		return j+i;
	}
	int do_something_2(const int i)
	{
		return j+i;
	}
};

int main()
{
	S s;
	std::cout<< s.do_something(3)<<"\n"; //8

	auto funtion_poiter = &S::do_something;
	int (S::*fp2)(int) = nullptr;

	if(true){
		fp2 = &S::do_something_2;
	} else{
		fp2 = &S::do_something;
	}

	std::cout<< (s.*funtion_poiter)(2)<<"\n";// prints7
	std::cout<< std::invoke(&S::do_something_2, s, 2)<<"\n";// prints7
	std::cout<< (s.*fp2)(1)<<"\n";// prints 6
	std::cout<< std::invoke(&S::do_something, s, 1)<<"\n";// prints6
	std::cout<< std::invoke(&S::j, s)<<"\n";// can also access member data


}

