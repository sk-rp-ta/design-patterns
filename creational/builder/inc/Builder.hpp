#include <string>

class NPC
{
    public:
        NPC& addWeapon(const std::string&);
        NPC& addShield(const std::string&);
        NPC& addBoots(const std::string&);
        NPC& addPants(const std::string&);
        NPC& addShirt(const std::string&);
        NPC& addHat(const std::string&);
        std::string weapon_;
        std::string shield_;
        std::string boots_;
        std::string pants_;
        std::string shirt_;
        std::string hat_;
};
