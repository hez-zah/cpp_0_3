#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

std::string  Zombie::get_name()
{
    return (this->_name);
}

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie();
    zombie->set_name(name);
    return (zombie);
}

Zombie::Zombie()
{
    std::cout << "\033[0;32mcreated " << this->_name << " Zombie\033[0;0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "\033[0;31mdestroy " << this->_name << " Zombie\033[0;0m" << std::endl;
}
