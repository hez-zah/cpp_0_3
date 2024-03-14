#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("hamza");
    z->announce();
    randomChump("hiba");
    delete z;
}
