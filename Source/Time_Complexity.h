#pragma once

#include <chrono>

#include "Log.h"

class TimeComplexity
{
private:
    double time = 0.00;
    unsigned int timeComplexity = 0;
    std::chrono::duration<double> timeDelta;
    std::chrono::time_point<std::chrono::_V2::system_clock> stopTime;
    std::chrono::time_point<std::chrono::_V2::system_clock> startTime;

public:
    TimeComplexity()
    {
    }

    ~TimeComplexity()
    {
        CalculateTimeComplexity();
    }

    void StartTimer()
    {
        startTime = std::chrono::high_resolution_clock::now();
    }

    void StopTimer()
    {
        stopTime = std::chrono::high_resolution_clock::now();
        timeDelta = stopTime - startTime;
        time = timeDelta.count() * 1000.00;
    }

private:
    void PrintResult()
    {
        switch (timeComplexity)
        {
        case 0:
            Log(GREEN, "Time: " + std::to_string(time));
            break;
        case 1:
            Log(YELLOW, "Good");
            break;
        case 2:
            Log(RED, "Bad");
            break;
        }
    }

    void CalculateTimeComplexity()
    {
        PrintResult();
    }
};