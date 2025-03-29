#pragma once

#include "Factory.hpp"

class Fedora : public Linux
{
    public:
        Fedora();
        ~Fedora();
        void updateSystem() override;
        Version getSystemVersion() override;
};