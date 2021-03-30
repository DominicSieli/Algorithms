#pragma once

#include <vector>

#include "Cross_Sort.h"

namespace Algorithms
{
    template<typename T>
    long long Binary_Search(std::vector<T>& vector, T data)
    {
        Cross_Sort(vector);

        unsigned int left = 0;
        unsigned int median = 0;
        unsigned int right = vector.size() - 1;

        if(data < vector[left] || data > vector[right])
        {
            return -1;
        }

        while(left <= right)
        {
            median = left + (right - left) / 2;

            if(vector[left] == data)
            {
                return left;
            }
            else if(vector[right] == data)
            {
                return right;
            }
            else if(vector[median] == data)
            {
                return median;
            }
            else if(vector[median] > data)
            {
                right = median - 1;
            }
            else if(vector[median] < data)
            {
                left = median + 1;
            }
        }

        return -1;
    }
}