#pragma once

#include <vector>

namespace Algorithms
{
    template<typename T>
    void Merge_Sort(std::vector<T>& vector, unsigned int start_index, unsigned int end_index)
    {
        if(start_index < end_index)
        {
            unsigned int middle_index = (start_index + end_index) / 2;

            Merge_Sort(vector, start_index, middle_index);
            Merge_Sort(vector, middle_index + 1, end_index);
            Merge(vector, start_index, middle_index, end_index);
        }

        return;
    }

    template<typename T>
    void Merge(std::vector<T>& vector, unsigned int start_index, unsigned int middle_index, unsigned int end_index)
    {
        unsigned int total_elements = (end_index - start_index) + 1;

        std::vector<T> temp_vector(total_elements);

        unsigned int merge_index = 0;
        unsigned int left_index = start_index;
        unsigned int right_index = middle_index + 1;

        while(left_index <= middle_index && right_index <= end_index)
        {
            if(vector[left_index] <= vector[right_index])
            {
                temp_vector[merge_index] = vector[left_index];
                ++left_index;
            }
            else
            {
                temp_vector[merge_index] = vector[right_index];
                ++right_index;
            }

            ++merge_index;
        }

        while(left_index <= middle_index)
        {
            temp_vector[merge_index] = vector[left_index];
            ++left_index;
            ++merge_index;
        }

        while(right_index <= end_index)
        {
            temp_vector[merge_index] = vector[right_index];
            ++right_index;
            ++merge_index;
        }

        for(unsigned int i = 0; i < total_elements; i++)
        {
            vector[start_index + i] = temp_vector[i];
        }

        return;
    }
}