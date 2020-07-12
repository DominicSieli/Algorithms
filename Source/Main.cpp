#include <vector>
#include <iostream>
#include "Algorithms.h"

std::vector<int> vector{5, 9, 3, 1, 6, 10, 4, 8, 2, 7};

int main()
{
    Algorithm::BubbleSort(vector);

    for (unsigned int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << '\n';
    }

    std::cin.get();
}