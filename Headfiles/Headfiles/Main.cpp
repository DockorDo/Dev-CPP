#include <iostream>
#include "Common.h"
#include "Log.h"

void Log(const char* message) {
	std::cout << message << std::endl;
}

int main() 
{
	InitLog();
	Log("Hello World");
}