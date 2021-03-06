#pragma once

#include <vector>

#include "Cross_Sort.h"

namespace Algorithms
{
    template<typename T>
    T Binary_Search(std::vector<T>& vector, T data)
    {
        Cross_Sort(vector);

        int index {};
        unsigned int start = 0;
        unsigned int end = vector.size();

        if(data < vector[0] || data > vector[vector.size() - 1])
        {
            return -1;
        }

        while(vector[index] != data)
        {
            index = start + (end - start) / 2;

            if(vector[index] == data)
            {
                return index;
            }
            else if(vector[index] > data)
            {
                end = index;
            }
            else if(vector[index] < data)
            {
                start = index;
            }
        }

        return -1;
    }
}