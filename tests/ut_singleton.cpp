#include "Singleton.hpp"

#include "gtest/gtest.h"

#include <type_traits>

TEST(ut_singleton, test_getInstance) 
{
    auto& first_singleton_instance = Singleton<int>::getInstance(10);
    auto& second_singleton_instance = Singleton<int>::getInstance(20);

    EXPECT_EQ(first_singleton_instance.getData(), second_singleton_instance.getData());
}

TEST(ut_singleton, test_singleton_is_nonconstructible) 
{
    EXPECT_FALSE(std::is_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_trivially_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_nothrow_constructible<Singleton<int>>::value);
}

TEST(ut_singleton, test_singleton_is_no_default_constructible) 
{
    EXPECT_FALSE(std::is_default_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_trivially_default_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_nothrow_default_constructible<Singleton<int>>::value);
}

TEST(ut_singleton, test_copy_constructor_deletion) 
{
    EXPECT_FALSE(std::is_copy_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_trivially_copy_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_nothrow_copy_constructible<Singleton<int>>::value);
}

TEST(ut_singleton, test_move_constructor_availability) 
{
    EXPECT_TRUE(std::is_move_constructible<Singleton<int>>::value);
    EXPECT_FALSE(std::is_trivially_move_constructible<Singleton<int>>::value);
    EXPECT_TRUE(std::is_nothrow_move_constructible<Singleton<int>>::value);
}

TEST(ut_singleton, test_copy_assignment_operator_deletion) 
{
    EXPECT_FALSE(std::is_copy_assignable<Singleton<int>>::value);
    EXPECT_FALSE(std::is_trivially_copy_assignable<Singleton<int>>::value);
    EXPECT_FALSE(std::is_nothrow_copy_assignable<Singleton<int>>::value);
}

TEST(ut_singleton, test_move_assignment_operator_deletion) 
{
    EXPECT_TRUE(std::is_move_assignable<Singleton<int>>::value);
    EXPECT_FALSE(std::is_trivially_move_assignable<Singleton<int>>::value);
    EXPECT_TRUE(std::is_nothrow_move_assignable<Singleton<int>>::value);
}
