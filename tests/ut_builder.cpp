#include "Builder.hpp"

#include "gtest/gtest.h"


struct ut_builder : public testing::Test
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
    NPC npc;

    EXPECT_EQ(empty_string_, npc.weapon_);
    EXPECT_EQ(empty_string_, npc.shield_);
    EXPECT_EQ(empty_string_, npc.boots_);
    EXPECT_EQ(empty_string_, npc.pants_);
    EXPECT_EQ(empty_string_, npc.shirt_);
    EXPECT_EQ(empty_string_, npc.hat_);
}

TEST_F(ut_builder, test_npc_with_all_fields_added)
{
    NPC npc;

    npc.addWeapon(input_weapon_)
        .addShield(input_shield_)
        .addBoots(input_boots_)
        .addPants(input_pants_)
        .addShirt(input_shirt_)
        .addHat(input_hat_);

    EXPECT_EQ(input_weapon_, npc.weapon_);
    EXPECT_EQ(input_shield_, npc.shield_);
    EXPECT_EQ(input_boots_, npc.boots_);
    EXPECT_EQ(input_pants_, npc.pants_);
    EXPECT_EQ(input_shirt_, npc.shirt_);
    EXPECT_EQ(input_hat_, npc.hat_);
}

TEST_F(ut_builder, test_npc_with_overwrite_field)
{
    NPC npc;

    npc.addWeapon(input_boots_)
        .addWeapon(input_weapon_);

    EXPECT_EQ(input_weapon_, npc.weapon_);
}
