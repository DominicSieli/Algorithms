#include <vector>
#include <iostream>
#include <stdlib.h>

#include "Timer.h"
#include "Algorithms.h"

Timer timer;
std::vector<int> vector(10);

int main()
{
    for (unsigned int i = 0; i < vector.size(); i++)
    {
        vector[i] = rand() % 100 + 1;
    }

    for (unsigned int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << '\n';
    }

    std::cout << '\n';

    timer.StartTimer();
    Algorithms::BubbleSort(vector);
    timer.StopTimer();

    std::cout << '\n';

    for (unsigned int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << '\n';
    }

    std::cin.get();
}