
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <stdlib.h>

class OutOfContainer : public std::exception
{
public:
	const char* what(void) const throw()
	{
		return "You'r value dosen't exist in container";
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int num){
    for(typename T::iterator it = container.begin(); it != container.end(); it++){
        if(*it == num){
            std::cout << "I have successfully found the value you entered " << num << "\n";
            return (it);
        }
    }
    throw OutOfContainer();
}

template <typename T>
void printcontainer(T &container){
    for(typename T::iterator it = container.begin(); it != container.end(); it++){
        std::cout << *it << "\n";
    }
    return;
}

#endif