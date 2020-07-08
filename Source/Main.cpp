#include <cmath>
#include <vector>

#include "Log.h"
#include "Time_Complexity.h"

double delta = 0.00;
std::vector<int> input;
std::vector<double> timeComplexity;

int main()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 0; j < pow(10, i); j++)
        {
            input.push_back(j);
        }

        timeComplexity.push_back(delta);

        input.clear();
    }

    TimeComplexity(timeComplexity);

    std::cin.get();
}