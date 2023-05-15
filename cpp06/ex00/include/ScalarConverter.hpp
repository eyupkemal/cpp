#pragma once

#include "iostream"
#include <string>
#include <iomanip>
#include <cstdlib>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define NORM "\x1B[0m"

class ScalarConverter{
    public:

    static void	convert_to_char(std::string &str);
    static void	convert_to_int(std::string &str);
    static void	convert_to_float(std::string &str);
    static void	convert_to_double(std::string &str);
    static bool	is_valid(std::string &str);

};

    bool	is_pseudo_literal(std::string &s);
    static void	conversion_of_scalar_types(std::string str);