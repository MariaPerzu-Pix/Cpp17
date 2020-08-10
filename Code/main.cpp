/*
 * main.cpp
 *
 *  Created on: Aug 5, 2020
 *      Author: mariapa
 */


#include <iostream>
#include <tuple>

template<typename... Ts>
void print_tuple (const std::tuple<Ts...> &tuple)
{
    std::apply ([] (const auto &... elem)
                {
                    ((std::cout << elem << '\n'), ...);
                },
                tuple);
}

int main() {
    const std::tuple<int, char> t = std::make_tuple(5, 'a');
    print_tuple(t);
}

