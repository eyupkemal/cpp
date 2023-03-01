#include "zombie.hpp"

int main()
{
    int n = 5;
    Zombie* zombie = zombieHorde(5,"zombir");
    while(n--)
    {
        zombie[n].announce();
    }
    delete[] zombie;
    system("leaks zombieHr");
    return(0);
}