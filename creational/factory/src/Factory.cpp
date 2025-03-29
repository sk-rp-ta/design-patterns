#include "Factory.hpp"

#include <iostream>

Linux::Linux() : version(1, 0, 0)
{
    std::cout << "Starting system" << std::endl;
}
Linux::~Linux()
{
    std::cout << "Shuting down system" << std::endl;
}