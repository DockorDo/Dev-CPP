#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int* value)// ���յ�ַ
{
	(*value)++;// �Ե�ַ�ڵ�ֵ���в���
}

int main() {
	int var = 8;
	// ָ��ֻ��һ���ڴ��ַ����ֻ��һ������
	/*
	void* ptr = NULL;
	void* ptr1 = nullptr;
	void* ptr2 = 0;
	*/
	void* ptr = &var;


	LOG(var);

	// ����8�ֽڵ��ڴ棬���ҷ���һ�����ڴ�鿪ͷ��ָ��
	char* buffer = new char[8];

	memset(buffer, 0, 8);

	char** ptr1 = &buffer;

	delete[] buffer;

	LOG("===================================");
	int a = 5;
	// ������������ֻ�Ǳ���������
	int& ref = a;
	// ����ָ���ַ
	Increment(&a);
	LOG(ref);


	std::cin.get();
}