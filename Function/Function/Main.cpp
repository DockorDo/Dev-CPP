#include <iostream>

// û�з���ֵ
void printMultiply(int a, int b)
{
	std::cout << a * b << std::endl;
}

int Multiply(int a, int b) {
	return a * b;
}
// ����������ֻ��Ϊ�˷�ֹ�ظ�
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