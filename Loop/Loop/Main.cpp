#include <iostream>
#include "Log.h"

int main() {
	int i = 0;
	bool condition = true;

	for (;condition;) {
		Log("Hello World1");
		i++;
		if (!(i < 5)) {
			condition = false;
		}
	}
	Log("=============================");
	for (int i = 0; i < 5; i++) {
		Log("Hello World2");
	}
	Log("=============================");
	i = 0;
	while (i <10)
	{
		Log("Hello World3");
		i++;
	}
	Log("=============================");



	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0)continue;

		Log("Hello World4");
		std::cout << i << std::endl;
	}

	Log("=============================");

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0)break;

		Log("Hello World5");
		std::cout << i << std::endl;
	}

	Log("=============================");
	std::cin.get();

}