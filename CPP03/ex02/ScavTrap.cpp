#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->sca_name = name;
    sethit_p(100);
    setenergy_p(50);
    setat_dmg(20);
    std::cout << "Called ScavTrap constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Called ScavTrap Deconstructor" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::string sca_name = this->sca_name;
    std::cout << PURPLE << "ScavTrap " << sca_name
    << " now in Gate keeper mode" << RESET << std::endl;
}
void    ScavTrap::attack(const std::string& target)
{
    std::cout << GREEN << "ScavTrap " << this->sca_name << " attacks "
    << target << ", causing " << getat_dmg()
    << " points of damage!" << RESET << std::endl;
}
