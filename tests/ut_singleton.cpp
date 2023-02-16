#include "Singleton.hpp"

#include "gtest/gtest.h"

#include <type_traits>

TEST(ut_singleton, test_getInstance) 
{
    auto& first_singleton_instance = Singleton<int>::getInstance(10);
    auto& second_singleton_instance = Singleton<int>::getInstance(20);

    EXPECT_EQ(first_singleton_instance.getData(), second_singleton_instance.getData());
}

TEST(ut_singleton, test_constructor_is_inaccesible) 
{
    EXPECT_FALSE(std::is_trivially_constructible<Singleton<int>>::value);
}

TEST(ut_singleton, test_copy_constructor_deletion) 
{
    EXPECT_FALSE(std::is_copy_constructible<Singleton<int>>::value);
}

TEST(ut_singleton, test_copy_operator_deletion) 
{
    EXPECT_FALSE(std::is_copy_assignable<Singleton<int>>::value);
}
