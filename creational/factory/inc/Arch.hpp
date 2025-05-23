#pragma once

#include "Factory.hpp"

class Arch : public Linux
{
    public:
        Arch();
        ~Arch();
        void updateSystem() override;
        Version getSystemVersion() override;
};