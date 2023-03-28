#include "zombie.hpp"

int main()
{
    int n = 5;
    Zombie* zombie = zombieHorde(5,"ZOMBİE");
    while(n--)
    {
        zombie[n].announce();
    }
    delete[] zombie;
    return(0);
}