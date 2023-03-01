#pragma once

# include <iostream>
# include <cctype>
# include <cstring>
# include <stdlib.h>
# include <string>
#include <iomanip>
#include <limits>

class Weapon{
private:
    std::string type;
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType();
    void setType(std::string);
};