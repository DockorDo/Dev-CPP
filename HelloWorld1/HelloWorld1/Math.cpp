#include <iostream>
#include "Log.h"


// static �ؼ��������Ǳ���������ֻΪ��ǰģ������
static int Multiply(int a, int b) {
	Log("Multiply");
	return a * b;
}

int main() {
	std::cout << Multiply(5, 7) << std::endl;
	std::cin.get();
}