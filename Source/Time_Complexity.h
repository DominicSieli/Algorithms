#include <iostream>

#define LOG_RED(...) std::cout << "\033[1;31m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_GREEN(...) std::cout << "\033[1;32m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_YELLOW(...) std::cout << "\033[1;33m" << (__VA_ARGS__) << "\033[0m" << '\n';

void TimeComplexity(const float &timeComplexity)
{
    if (timeComplexity <= 0.33f)
    {
        LOG_GREEN("GREEN")
    }

    if (timeComplexity > 0.33f && timeComplexity < 0.66f)
    {
        LOG_YELLOW("YELLOW")
    }

    if (timeComplexity >= 0.66f)
    {
        LOG_RED("RED")
    }
}