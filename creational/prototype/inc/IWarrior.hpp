#include <memory>

class IWarrior
{
public:
    virtual ~IWarrior() = default;
    IWarrior(uint16_t health, uint16_t damage)
        : health(health), damage(damage) {}
    virtual std::unique_ptr<IWarrior> clone() const = 0;
    uint16_t health;
    uint16_t damage;
};