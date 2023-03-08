#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal a;
    const Animal* i = new Cat();

    delete i;

    system("leaks Polymorphism");

return 0;
}