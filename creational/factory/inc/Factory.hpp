#pragma once

#include <tuple>
#include <cstdint>

using Version = std::tuple<uint16_t, uint16_t, uint16_t>;

class Linux
{
    public:
        Linux();
        virtual ~Linux();
        virtual void updateSystem() = 0;
        virtual Version getSystemVersion() = 0;

    protected:
        bool isRunning;
        Version version;
};