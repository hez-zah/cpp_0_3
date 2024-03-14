#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name_a(name), weapon_a(weapon)
{
    std::cout << "\033[0;32mHumanA " << this->name_a << " Created with ";
    std::cout << this->weapon_a.getType() << "\033[0;0m" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "\033[0;31m" << this->name_a << " dead\033[0;0m" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name_a << " attacks with their " << (this->weapon_a).getType() << std::endl;
}
