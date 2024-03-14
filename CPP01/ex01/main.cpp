#include "Zombie.hpp"


void    leaks(){system("leaks Zombie");}

int main()
{
    Zombie  *zombie;
    int     i;
    int     N = 10;

    zombie = zombieHorde(N, "hamza");
    i = -1;
    while (++i < N)
        zombie[i].announce();
    delete[] zombie;
}
