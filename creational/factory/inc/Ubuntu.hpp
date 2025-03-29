#pragma once

#include "Factory.hpp"

class Ubuntu : public Linux
{
    public:
        Ubuntu();
        ~Ubuntu();
        void updateSystem() override;
        Version getSystemVersion() override;
};