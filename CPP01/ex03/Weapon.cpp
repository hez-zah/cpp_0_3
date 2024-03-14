#include "Weapon.hpp"

Weapon::Weapon(std::string typ): type(typ)
{
}

Weapon::~Weapon()
{
}

std::string  Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string typ)
{
    this->type = typ;
}
