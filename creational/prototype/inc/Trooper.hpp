#include "IWarrior.hpp"

class Trooper : public IWarrior
{
public:
    Trooper(uint32_t health, uint32_t damage);
    std::unique_ptr<IWarrior> clone() const override;
};