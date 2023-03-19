#include "Builder.hpp"

#include "gtest/gtest.h"


struct ut_builder : public testing::Test, public NPC
{
    const std::string empty_string_;

    const std::string input_weapon_ = "ancient sword";
    const std::string input_shield_ = "antique shield";
    const std::string input_boots_ = "seven-league boots";
    const std::string input_pants_ = "leather pants";
    const std::string input_shirt_ = "linen shirt";
    const std::string input_hat_ = "magician's hat";

};

TEST_F(ut_builder, test_npc_without_adding_any_field)
{
    EXPECT_TRUE(weapon_.empty());
    EXPECT_TRUE(shield_.empty());
    EXPECT_TRUE(boots_.empty());
    EXPECT_TRUE(pants_.empty());
    EXPECT_TRUE(shirt_.empty());
    EXPECT_TRUE(hat_.empty());
}

TEST_F(ut_builder, test_npc_with_all_fields_added)
{
    this->addWeapon(input_weapon_)
        .addShield(input_shield_)
        .addBoots(input_boots_)
        .addPants(input_pants_)
        .addShirt(input_shirt_)
        .addHat(input_hat_);

    EXPECT_EQ(input_weapon_, weapon_);
    EXPECT_EQ(input_shield_, shield_);
    EXPECT_EQ(input_boots_, boots_);
    EXPECT_EQ(input_pants_, pants_);
    EXPECT_EQ(input_shirt_, shirt_);
    EXPECT_EQ(input_hat_, hat_);
}

TEST_F(ut_builder, test_npc_with_overwrite_field)
{
    this->addWeapon(input_boots_)
        .addWeapon(input_weapon_);

    EXPECT_EQ(input_weapon_, weapon_);
}
