#pragma once

#include <vector>

namespace Algorithms
{
    template<typename T>
    void Counting_Sort(std::vector<T>& vector)
    {
        T max = 0;

        for(unsigned int i = 0; i < vector.size(); ++i)
        {
            if(vector[i] > max)
            {
                max = vector[i];
            }
        }

        int counter_size = max + 1;
        std::vector<T> counter_vector(counter_size);

        for(int i = 0; i < counter_size; ++i)
        {
            ++counter_vector[vector[i]];
        }

        int vector_counter = 0;

        for(int i = 0; i < counter_size; ++i)
        {
            while(counter_vector[i] > 0)
            {
                vector[vector_counter++] = i;
                --counter_vector[i];
            }
        }
    }
}