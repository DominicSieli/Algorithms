#include <vector>
#include <iostream>

#include "Timer.h"
#include "Merge_Sort.h"

Timer timer;
std::vector<int> vector {7,9,3,2,10,6,1,4,5,8};

int main()
{
    for(unsigned int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << '\n';
    }

    std::cout << '\n';

    timer.Start_Timer();
    Algorithms::Merge_Sort(vector, 0, vector.size() - 1);
    timer.Stop_Timer();

    std::cout << '\n';

    for(unsigned int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << '\n';
    }

    std::cin.get();
}