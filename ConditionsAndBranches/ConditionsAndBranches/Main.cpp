#include <iostream>
#include "Log.h"


int main()
{
	int x = 5;
	if (x == 5) Log("Hello World!");

	const char* ptr = "Hello";
	if (ptr)
		Log(ptr);
    if (ptr == "Hello")
		Log("Ptr is Hello");
	else
		Log("Ptr is null!");
	std::cin.get();
} 