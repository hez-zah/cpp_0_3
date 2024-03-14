#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_b(name)
{
    std::cout << "\033[0;32mHumanB " << this->name_b << " Created with no weapon\033[0;0m" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "\033[0;31m" << this->name_b << " dead\033[0;0m" << std::endl;
}

void    HumanB::attack()
{
    std::cout << this->name_b << " attacks with their " << (this->weapon_b)->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon_b = &weapon;
}
