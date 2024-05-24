#include <iostream>

// 没有返回值
void printMultiply(int a, int b)
{
	std::cout << a * b << std::endl;
}

int Multiply(int a, int b) {
	return a * b;
}
// 函数的作用只是为了防止重复
void MultiplyAndLog(int a,int b) 
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	MultiplyAndLog(3, 2);
	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);
	std::cin.get();
}