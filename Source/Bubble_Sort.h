#pragma once

#include <vector>
#include "Algorithm.h"

template <typename T>
class BubbleSort : public Algorithm<T>
{
private:
    bool sorted = false;
    std::vector<T> &vector;

public:
    BubbleSort(std::vector<T> &vector) : sorted(false), vector(vector)
    {
        RunAlgorithm();
    }

    void RunAlgorithm()
    {
        while (sorted == false)
        {
            sorted = true;

            for (unsigned int i = 0; i < vector.size(); i++)
            {
                if (i < vector.size() - 1)
                {
                    if (vector[i] > vector[i + 1])
                    {
                        sorted = false;

                        T t = vector[i];
                        vector[i] = vector[i + 1];
                        vector[i + 1] = t;
                    }
                }
            }
        }
    }
};