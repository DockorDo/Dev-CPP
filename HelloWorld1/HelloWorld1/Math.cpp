#include <iostream>
#include "Log.h"


// static 关键字作用是标记这个函数只为当前模块所用
static int Multiply(int a, int b) {
	Log("Multiply");
	return a * b;
}

int main() {
	std::cout << Multiply(5, 7) << std::endl;
	std::cin.get();
}