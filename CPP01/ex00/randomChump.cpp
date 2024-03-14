#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  *rand_zombie;

    rand_zombie = new Zombie();
    rand_zombie->set_name(name);
    rand_zombie->announce();
    delete rand_zombie;
}
