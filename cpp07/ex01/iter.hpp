#pragma once
#include <iostream>
#include <iomanip>

#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"

template<typename T>
void iter(T* arr, size_t length, void (*func)(T const &))
{
    for (size_t i = 0; i < length; i++)
    {
        func(arr[i]);
    }
}
