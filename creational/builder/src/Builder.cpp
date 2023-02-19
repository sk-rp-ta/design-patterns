#include "Builder.hpp"

NPC& NPC::addWeapon(const std::string& weapon)
{
    weapon_ = weapon;

    return *this;
}

NPC& NPC::addShield(const std::string& shield)
{
    shield_ = shield;

    return *this;
}

NPC& NPC::addBoots(const std::string& boots)
{
    boots_ = boots;

    return *this;
}

NPC& NPC::addPants(const std::string& pants)
{
    pants_ = pants;

    return *this;
}

NPC& NPC::addShirt(const std::string& shirt)
{
    shirt_ = shirt;

    return *this;
}

NPC& NPC::addHat(const std::string& hat)
{
    hat_ = hat;

    return *this;
}
