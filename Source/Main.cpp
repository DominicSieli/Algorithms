#include <vector>
#include <iostream>

#include "Timer.h"
#include "Binary_Search.h"

Timer timer;
std::vector<int> vector;

int main()
{
    for(unsigned int i = 1; i < 11; i++)
    {
        vector.push_back(i);
    }

    timer.Start_Timer();
    std::cout << Algorithms::Binary_Search<int>(vector, 6);
    std::cout << '\n';
    timer.Stop_Timer();

    std::cout << '\n';

    std::cin.get();
}