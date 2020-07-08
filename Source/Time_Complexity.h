#pragma once

#include "Log.h"

void TimeComplexity(const std::vector<double> &timeComplexity)
{
    unsigned short int score = 0;

    for (unsigned int i = 0; i < timeComplexity.size(); i++)
    {
        if (timeComplexity[i] == timeComplexity[i + 1])
        {
            score = 0;
        }
    }

    switch (score)
    {
    case 0:
        Log(GREEN, "Constant");
        break;
    case 1:
        Log(YELLOW, "Good");
        break;
    case 2:
        Log(RED, "Bad");
        break;
    }
}