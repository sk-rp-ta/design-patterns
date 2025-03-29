#include "Ubuntu.hpp"

#include <iostream>
#include <tuple>

Ubuntu::Ubuntu()
{
    std::cout << "Loading Ubuntu" << std::endl;
    isRunning = true;
}

Ubuntu::~Ubuntu()
{
    std::cout << "Leaving Ubuntu" << std::endl;
    isRunning = false;
}

void Ubuntu::updateSystem()
{
    if (not isRunning)
    {
        return;
    }

    ++std::get<2>(version);

    std::cout << "Ubuntu updated to version: "
            << std::get<0>(version) << "."
            << std::get<1>(version) << "."
            << std::get<2>(version) << std::endl;
}

Version Ubuntu::getSystemVersion()
{
    return version;
}
