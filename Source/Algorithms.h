#pragma once

#include <vector>

namespace Algorithms
{
    template <typename T>
    void BubbleSort(std::vector<T> &vector)
    {
        if (vector.size() > 0)
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
                        auto vi = vector[i];
                        vector[i] = vector[i + 1];
                        vector[i + 1] = vi;
                    }
                }
            }
        }
    }
}