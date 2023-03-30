# include <iostream>
# include <cctype>
# include <cstring>
# include <stdlib.h>
# include <string>
#include <iomanip>
#include <limits>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    std::cout<< &str <<" "<< &ptr <<" " << &ref <<" " << std::endl;
    std::cout<< str <<" "<< *ptr <<" " << ref <<" " << std::endl;
}
