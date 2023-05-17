#include "iter.hpp"

void printstr(const std::string &str){
    std::cout << str << "   ";
}
void printnumber(const int &nbr)
{
    std::cout << nbr << " ";
}


int main()
{
    std::cout << std::setw(10) <<YEL << std::left << "TEST 1" <<std::endl;
    std::string array[2]= {"ali","ahmet"};
    iter(array,2,printstr);
    std::cout<< std::endl << std::setw(10) <<BLUE << "TEST 2" << std::endl;
    int arr[5] ={1,2,3,4,5};
    iter(arr,5,printnumber);
}

