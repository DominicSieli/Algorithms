#pragma once

#include <chrono>
#include <iostream>

class Timer
{
private:
    std::chrono::duration<double> timeDelta;
    std::chrono::time_point<std::chrono::_V2::system_clock> stopTime;
    std::chrono::time_point<std::chrono::_V2::system_clock> startTime;

public:
    void StartTimer()
    {
        startTime = std::chrono::high_resolution_clock::now();
    }

    void StopTimer()
    {
        stopTime = std::chrono::high_resolution_clock::now();
        timeDelta = stopTime - startTime;
        std::cout << "Time: " << timeDelta.count() << "ms" << '\n';
    }
};