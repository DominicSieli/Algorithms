#pragma once

#include <vector>

namespace Algorithm
{
    template <typename T>
    void BubbleSort(std::vector<T> &vector)
    {
        bool sorted = false;

        while (sorted == false)
        {
            sorted = true;

            for (unsigned int i = 0; i < vector.size() - 1; i++)
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