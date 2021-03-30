#include <vector>
#include <iostream>

#include "Binary_Search.h"

std::vector<int> vector({2,4,8,16,32,64,128});

int main()
{
	for(int i = 1; i <= 256; i *= 2)
	{
        std::cout << i << ": " << Algorithms::Binary_Search<int>(vector, i) << '\n';
	}

    std::cin.get();
}