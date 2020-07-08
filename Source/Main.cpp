#include <vector>
#include "Bubble_Sort.h"
#include "Time_Complexity.h"

using T = int;
std::vector<T> vector;

int main()
{
    BubbleSort<T> bubbleSort(vector);
    TimeComplexity<T> timeComplexity(bubbleSort);

    std::cin.get();
}