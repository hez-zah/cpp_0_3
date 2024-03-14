#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string  name_a;
        Weapon  &weapon_a;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack();
};

#endif
