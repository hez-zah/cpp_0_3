#ifndef HUMAN_B
# define HUMAN_B

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string  name_b;
        Weapon  *weapon_b;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon weapon);
};

#endif
