#pragma once

#include <chrono>

#include "Log.h"
#include "Algorithms.h"

template <typename T>
class TimeComplexity
{
private:
    double delta = 0.00;
    Algorithm<T> &algorithm;
    unsigned int iterations = 0;
    unsigned int timeComplexity = 0;
    std::chrono::duration<double> duration;
    std::chrono::time_point<std::chrono::_V2::system_clock> stop;
    std::chrono::time_point<std::chrono::_V2::system_clock> start;

public:
    TimeComplexity(Algorithm<T> &algorithm) : delta(0.00), algorithm(algorithm), iterations(0), timeComplexity(0)
    {
        Analyze();
        PrintResult();
    }

    virtual ~TimeComplexity() {}

private:
    void StartTimer()
    {
        iterations++;
        start = std::chrono::high_resolution_clock::now();
    }

    void StopTimer()
    {
        stop = std::chrono::high_resolution_clock::now();
        duration = stop - start;
        delta = (duration.count() * 1000.00) / (double)iterations;
    }

    void Analyze()
    {
        for (unsigned int i = 0; i < 1000; i++)
        {
            StartTimer();
            algorithm.Run();
            StopTimer();
        }

        Log(GREEN, "Delta: " + std::to_string(delta));
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