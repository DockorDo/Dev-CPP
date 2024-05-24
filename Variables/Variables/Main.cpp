#include <iostream>

int main() 
{
	// char :1字节；short ：2字节；int ：4字节；long：通常也是四个字节；long long：8字节
	char a = 'A';
	char A = 65;
	short aa = 65;
	std::cout << a << std::endl;
	std::cout << A << std::endl;
	std::cout << aa << std::endl;

	// float ,double
	float fvariable = 5.5f;
	std::cout << fvariable << std::endl;
	std::cout << sizeof(float) << std::endl;
	double var = 5.2;
	std::cout << var << std::endl;
	std::cout << sizeof(double) << std::endl;

	bool bvariable = true;
	std::cout << bvariable << std::endl;
	std::cout << sizeof(bool) << std::endl;

	// int 整型 一般为4字节左右
	unsigned int variable = 8;// -2b -> 2b
	// 无符号整型
	unsigned int variable1 = 8;// -2b -> 2b
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	std::cin.get();

}