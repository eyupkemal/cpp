#pragma once

#include <string>

typedef struct 
{
    std::string name;
    std::string department;
    std::string job;
    int age;
    bool isActive;
} Data;

class Serializer {
public:
    static uintptr_t serialize(Data* data);
    static Data* deserialize(uintptr_t raw);
};