#include <iostream>

int main() 
{
	// char :1�ֽڣ�short ��2�ֽڣ�int ��4�ֽڣ�long��ͨ��Ҳ���ĸ��ֽڣ�long long��8�ֽ�
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

	// int ���� һ��Ϊ4�ֽ�����
	unsigned int variable = 8;// -2b -> 2b
	// �޷�������
	unsigned int variable1 = 8;// -2b -> 2b
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	std::cin.get();

}