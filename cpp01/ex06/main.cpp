#include "Harl.hpp"

int main(int ac,char** av)
{
    if(ac == 2)
    {
        Harl True;
        std::string level(av[1]);
        True.complain(level);
    }

}