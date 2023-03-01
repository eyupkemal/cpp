#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("ahmet");
    zombie->announce();
    randomChump(zombie->getName());
    //system("leaks account");
    return(0);
}
