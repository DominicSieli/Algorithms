#pragma once

#include <vector>

namespace Algorithms
{
    template<typename T>
    void Selection_Sort(std::vector<T>& vector)
    {
        unsigned int min_index = 0;

        for(unsigned int i = 0; i < vector.size(); i++)
        {
            min_index = i;

            for(unsigned int j = i + 1; j < vector.size(); j++)
            {
                if(vector[j] < vector[min_index])
                {
                    min_index = j;
                }
            }

            std::swap(vector[i], vector[min_index]);
        }
    }
}