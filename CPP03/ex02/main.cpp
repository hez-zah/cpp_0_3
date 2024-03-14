#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string s1 = "super";
    FragTrap fr(s1);
    std::cout << fr.getat_dmg() << std::endl;
}
