#include <iostream>
#include "Zombie.hpp"
#include <stdlib.h>


int main()
{
	Zombie *a = newZombie("Jhon");
	Zombie *b = newZombie("Hasan");
	Zombie *c = newZombie("Hans");

	a->announce();
	b->announce();
	c->announce();
	randomChump("Harun");
	delete a;
	delete b;
	delete c;

}
