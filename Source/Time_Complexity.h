#pragma once

#include <chrono>

#include "Log.h"

class TimeComplexity
{
private:
    double delta = 0.00;
    unsigned int iterations = 0;
    unsigned int timeComplexity = 0;
    std::chrono::duration<double> deltaTime;
    std::chrono::time_point<std::chrono::_V2::system_clock> stopTimer;
    std::chrono::time_point<std::chrono::_V2::system_clock> startTimer;

public:
    TimeComplexity()
    {
    }

    ~TimeComplexity()
    {
        PrintResult();
    }

private:
    void StartTimer()
    {
        iterations++;
        startTimer = std::chrono::high_resolution_clock::now();
    }

    void StopTimer()
    {
        stopTimer = std::chrono::high_resolution_clock::now();
        deltaTime = stopTimer - startTimer;
        delta = (deltaTime.count() * 1000.00) / iterations;
    }

    void PrintResult()
    {
        switch (timeComplexity)
        {
        case 0:
            Log(GREEN, "Time Complexity: Constant");
            break;
        case 1:
            Log(YELLOW, "Good");
            break;
        case 2:
            Log(RED, "Bad");
            break;
        }
    }
};