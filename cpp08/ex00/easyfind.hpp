#pragma once
#include <iostream>
#include <vector>

class Error : public std::exception
{
	const char* what() const throw() { return "Error: not found"; }
};

template<typename T>
typename T::iterator easyfind(T& container, int value) {
    for (typename T::iterator it = container.begin(); it != container.end(); it++) {
        if (*it == value) {
            return it;
        }
    }
    throw Error();
}
