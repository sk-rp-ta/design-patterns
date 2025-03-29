#include "Fedora.hpp"

#include <iostream>
#include <tuple>

Fedora::Fedora()
{
    std::cout << "Loading Fedora" << std::endl;
    isRunning = true;
}

Fedora::~Fedora()
{
    std::cout << "Leaving Fedora" << std::endl;
    isRunning = false;
}

void Fedora::updateSystem()
{
    if (not isRunning)
    {
        return;
    }

    ++std::get<2>(version);

    std::cout << "Fedora updated to version: "
            << std::get<0>(version) << "."
            << std::get<1>(version) << "."
            << std::get<2>(version) << std::endl;
}

Version Fedora::getSystemVersion()
{
    return version;
}
