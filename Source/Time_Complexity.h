#pragma once

#include <chrono>

#include "Log.h"
#include "Algorithm.h"

template <typename T>
class TimeComplexity
{
private:
    double delta = 0.00;
    Algorithm<T> &algorithm;
    unsigned int complexity = 0;
    unsigned int iterations = 0;
    std::chrono::duration<double> duration;
    std::chrono::time_point<std::chrono::_V2::system_clock> stop;
    std::chrono::time_point<std::chrono::_V2::system_clock> start;

public:
    TimeComplexity(Algorithm<T> &algorithm) : delta(0.00), algorithm(algorithm), complexity(0), iterations(0)
    {
        AnalyzeAlgorithm();
        PrintResult();
    }

    virtual ~TimeComplexity() {}

private:
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

    void AnalyzeAlgorithm()
    {
        Start();
        algorithm.RunAlgorithm();
        Stop();
    }

    void PrintResult()
    {
        switch (complexity)
        {
        case 0:
            Log(GREEN, "Time Complexity: Constant - " + std::to_string(delta));
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