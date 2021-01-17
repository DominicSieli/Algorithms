#pragma once

#include <vector>

namespace Algorithms
{
    template<typename T>
    void Bubble_Sort(std::vector<T>& vector)
    {
        if(vector.size() < 2)
        {
            return;
        }

        bool sorted = false;

        while(sorted == false)
        {
            sorted = true;

            for(unsigned int i = 0; i < vector.size() - 1; i++)
            {
                if(vector[i] > vector[i + 1])
                {
                    sorted = false;
                    std::swap(vector[i], vector[i + 1]);
                }
            }
        }
    }
}