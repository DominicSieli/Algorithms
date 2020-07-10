#include <vector>
#include "Algorithms.h"
#include "Time_Complexity.h"

using T = int;
std::vector<T> vector;

int main()
{
    for (unsigned int i = 10000; i > 0; i--)
    {
        vector.push_back(i);
    }

    BubbleSort<T> bubbleSort(vector);
    TimeComplexity<T> timeComplexity(bubbleSort);

    std::cin.get();
}