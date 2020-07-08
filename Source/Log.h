#pragma once

#include <string>
#include <iostream>

#include "Color_Codes.h"

void Log(const LinuxColor &color, const std::string &text)
{
	std::cout << "\033[1;" << color << "m" << text << "\033[0m" << '\n';
}