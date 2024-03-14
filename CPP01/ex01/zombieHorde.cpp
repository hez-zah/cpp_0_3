#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *first_Zombie;
    int     i;

    first_Zombie = new Zombie[N];
    i = -1;
    while (++i < N)
        first_Zombie[i].set_name(name);
    return(first_Zombie);
}
