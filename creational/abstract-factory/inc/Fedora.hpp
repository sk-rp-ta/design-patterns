#pragma once

#include "AbstractFactory.hpp"

class Fedora : public Linux
{
    public:
        Fedora();
        ~Fedora();
        void updateSystem() override;
        Version getSystemVersion() override;
};