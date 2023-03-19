#include "Arch.hpp"
#include "Fedora.hpp"
#include "Ubuntu.hpp"

#include "gtest/gtest.h"

using TestedTypes = testing::Types<Arch, Fedora, Ubuntu>;

template <typename TestedType>
class TestAbstractFactory : public testing::Test
{
    public:
        TestedType impl_;
};

TYPED_TEST_SUITE(TestAbstractFactory, TestedTypes);

TYPED_TEST(TestAbstractFactory, testSystemVersionOnStart)
{
    auto actualSystemVersion = this->impl_.getSystemVersion();
    EXPECT_EQ(actualSystemVersion, std::tuple(1, 0, 0));
}

TYPED_TEST(TestAbstractFactory, testSystemUpdate)
{
    this->impl_.updateSystem();

    auto actualSystemVersion = this->impl_.getSystemVersion();
    EXPECT_EQ(actualSystemVersion, std::tuple(1, 0, 1));
}
