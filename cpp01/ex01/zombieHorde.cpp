#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int i = 0;
    Zombie *Z = new Zombie[N];
    while(N--){
            Z[i].setName(name);
            i++;
    }
    system("leaks zombieHr");
    return(Z);
}