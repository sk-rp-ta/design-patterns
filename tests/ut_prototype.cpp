#include "gtest/gtest.h"
#include "Trooper.hpp"

#include <type_traits>

TEST(TestTrooper, testTrooperDerivesFromIClone)
{
    auto isSameValue = std::is_base_of<IWarrior, Trooper>();
    EXPECT_TRUE(isSameValue);
}

TEST(TestTrooper, testTrooperCloneReturnsExactCopy)
{
    Trooper trooper(100, 50);
    auto clone = trooper.clone();

    EXPECT_EQ(trooper.health, clone->health);
    EXPECT_EQ(trooper.damage, clone->damage);
}
