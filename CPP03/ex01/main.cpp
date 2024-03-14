#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1("monster");
    ClapTrap s2("Serina");

    std::cout << std::endl;
    s1.attack("serina");
    s2.takeDamage(6);
    s2.beRepaired(4);
    std::cout << std::endl;
    s2.attack("monster");
    s1.guardGate();
    s1.attack("Serina");
    s2.takeDamage(6);
    s2.beRepaired(2);
    std::cout << std::endl;
    s1.attack("serina");
    s2.takeDamage(6);
    s2.takeDamage(2);
    s2.beRepaired(4);
    std::cout << std::endl;
}
