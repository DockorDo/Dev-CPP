#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int* value)// 接收地址
{
	(*value)++;// 对地址内的值进行操作
}

int main() {
	int var = 8;
	// 指针只是一个内存地址，他只是一个整数
	/*
	void* ptr = NULL;
	void* ptr1 = nullptr;
	void* ptr2 = 0;
	*/
	void* ptr = &var;


	LOG(var);

	// 创建8字节的内存，并且返回一个该内存块开头的指针
	char* buffer = new char[8];

	memset(buffer, 0, 8);

	char** ptr1 = &buffer;

	delete[] buffer;

	LOG("===================================");
	int a = 5;
	// 变量别名，它只是变量的引用
	int& ref = a;
	// 传入指针地址
	Increment(&a);
	LOG(ref);


	std::cin.get();
}