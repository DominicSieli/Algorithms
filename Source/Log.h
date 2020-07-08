#pragma once

#include <string>
#include <iostream>

enum LinuxColor : unsigned int
{
	RED = 31,
	BLUE = 34,
	CYAN = 36,
	GREEN = 32,
	WHITE = 37,
	YELLOW = 33,
	MAGENTA = 35
};

void Log(const LinuxColor &color, const std::string &text)
{
	std::cout << "\033[1;" << color << "m" << text << "\033[0m" << '\n';
}