#include "Arch.hpp"

#include <iostream>
#include <tuple>

Arch::Arch()
{
    std::cout << "Loading Arch" << std::endl;
    isRunning = true;
}

Arch::~Arch()
{
    std::cout << "Leaving Arch" << std::endl;
    isRunning = false;
}

void Arch::updateSystem()
{
    if (not isRunning)
    {
        return;
    }

    ++std::get<2>(version);

    std::cout << "Arch updated to version: "
            << std::get<0>(version) << "."
            << std::get<1>(version) << "."
            << std::get<2>(version) << std::endl;
}

Version Arch::getSystemVersion()
{
    return version;
}