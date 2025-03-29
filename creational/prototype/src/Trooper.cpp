#include "Trooper.hpp"

Trooper::Trooper(uint32_t health, uint32_t damage)
    : IWarrior(health, damage)
{
}

std::unique_ptr<IWarrior> Trooper::clone() const
{
    return std::make_unique<Trooper>(*this);
}