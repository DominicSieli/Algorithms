#pragma once

#include <vector>

#include "Log.h"
#include "Algorithm.h"

template <typename T>
class BubbleSort : public Algorithm<T>
{
public:
    BubbleSort(std::vector<T> vector) { Run(); }

    ~BubbleSort() {}

    void Run()
    {
        Log(GREEN, "Run Excecuted");
    }
};