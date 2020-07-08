#pragma once

#include <chrono>

#include "Log.h"
#include "Algorithm.h"

template <typename T>
class TimeComplexity
{
private:
    double delta = 0.00;
    unsigned int complexity = 0;
    unsigned int iterations = 0;
    std::chrono::duration<double> duration;
    std::chrono::time_point<std::chrono::_V2::system_clock> stop;
    std::chrono::time_point<std::chrono::_V2::system_clock> start;

public:
    TimeComplexity(Algorithm<T> &algorithm) : delta(0.00), complexity(0), iterations(0)
    {
        Start();
        algorithm.Run();
        Stop();
        PrintResult();
    }

    ~TimeComplexity()
    {
        //PrintResult();
        //Log(GREEN, std::to_string(delta));
    }

    void PrintResult()
    {
        switch (complexity)
        {
        case 0:
            Log(GREEN, "Constant");
            break;
        case 1:
            Log(YELLOW, "Good");
            break;
        case 2:
            Log(RED, "Bad");
            break;
        }
    }

    void Start()
    {
        iterations++;
        start = std::chrono::high_resolution_clock::now();
    }

    void Stop()
    {
        stop = std::chrono::high_resolution_clock::now();
        duration = stop - start;
        delta += duration.count() * 1000.00;
        delta = delta / (double)iterations;
    }
};