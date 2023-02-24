# include <iostream>
# include <cctype>
# include <cstring>
# include <stdlib.h>
# include <string>
#include <iomanip>
#include <limits>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;//hali hazırda olan bır degıskene yazdıgımız için adres oldu 
    std::string &ref = str;// degişkenın yanına yazdıgım için refereans oldu;
    std::cout<< &str <<" "<< &ptr <<" " << &ref <<" " << std::endl;
    std::cout<< str <<" "<< *ptr <<" " << ref <<" " << std::endl;
}
