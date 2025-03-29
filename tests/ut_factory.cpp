#include "Arch.hpp"
#include "Fedora.hpp"
#include "Ubuntu.hpp"

#include "gtest/gtest.h"

using TestedTypes = testing::Types<Arch, Fedora, Ubuntu>;

template <typename TestedType>
class TestFactory : public testing::Test
{
public:
    TestedType impl_;
};

TYPED_TEST_SUITE(TestFactory, TestedTypes);

TYPED_TEST(TestFactory, testSystemVersionOnStart)
{
    auto actualSystemVersion = this->impl_.getSystemVersion();
    EXPECT_EQ(actualSystemVersion, std::tuple(1, 0, 0));
}

TYPED_TEST(TestFactory, testSystemUpdate)
{
    this->impl_.updateSystem();

    auto actualSystemVersion = this->impl_.getSystemVersion();
    EXPECT_EQ(actualSystemVersion, std::tuple(1, 0, 1));
}
