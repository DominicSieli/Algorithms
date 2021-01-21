#pragma once

#include <vector>

namespace Algorithms
{
    template<typename T>
    int Partition(std::vector<T>& vector, int start_index, int end_index)
    {
        T pivot = vector[start_index];
        int middle_index = start_index;

        for(int i = start_index + 1; i <= end_index; ++i)
        {
            if(vector[i] < pivot)
            {
                ++middle_index;
                std::swap(vector[i], vector[middle_index]);
            }
        }

        std::swap(vector[start_index], vector[middle_index]);
        return middle_index;
    }

    template<typename T>
    void Quick_Sort(std::vector<T>& vector, int start_index, int end_index)
    {
        if(start_index < end_index)
        {
            int pivot_index = Partition(vector, start_index, end_index);

            Quick_Sort(vector, start_index, pivot_index - 1);
            Quick_Sort(vector, pivot_index + 1, end_index);
        }
    }
}