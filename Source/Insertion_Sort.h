#pragma once

#include <vector>

namespace Algorithms
{
    template<typename T>
    void Insertion_Sort(std::vector<T>& vector)
    {
        for(unsigned int i = 0; i < vector.size(); i++)
        {
            int j;
            T reference_value = vector[i];

            for(j = i - 1; j >= 0; j--)
            {
                if(vector[j] > reference_value)
                {
                    vector[j + 1] = vector[j];
                }
                else
                {
                    break;
                }
            }

            vector[j + 1] = reference_value;
        }
    }
}