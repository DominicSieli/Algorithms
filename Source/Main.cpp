#include <vector>

#include "Time_Complexity.h"

std::vector<int> vector;

int main()
{
    {
        TimeComplexity timeComplexity;

        for (unsigned int i = 0; i < 10; i++)
        {
            timeComplexity.Start();

            for (unsigned int s = 0; s < 1000000; s++)
            {
                vector.push_back(s);
            }

            timeComplexity.Stop();
        }
    }

    std::cin.get();
}