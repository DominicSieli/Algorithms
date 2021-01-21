#pragma once

#include <queue>
#include <vector>

namespace Algorithms
{
    template<typename T>
    void Radix_Sort(std::vector<T>& vector)
    {
        std::queue<T>* buckets = new std::queue<T>[10];

        T max = vector[0];

        for(unsigned int i = 0; i < vector.size(); ++i)
        {
            if(max < vector[i])
            {
                max = vector[i];
            }
        }

        for(unsigned int exp = 1; max/exp > 0; exp *= 10)
        {
            for(unsigned int i = 0; i < vector.size(); ++i)
            {
                buckets[(vector[i]/exp)%10].push(vector[i]);
            }

            unsigned int vector_counter = 0;

            for(unsigned int i = 0; i < 10; ++i)
            {
                while(!buckets[i].empty())
                {
                    vector[vector_counter++] = buckets[i].front();
                    buckets[i].pop();
                }
            }
        }

        delete[] buckets;
        return;
    }
}
