#include <iostream>
#include <string>

struct Vector2 {
	float x, y;
};

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];

		memcpy(m_Buffer, string, m_Size);

		m_Buffer[m_Size] = 0;

	}
	~String() {
		delete[] m_Buffer;
	}

	String(const String& other) 
		:m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
		// memcpy(this, &other, sizeof(String));
	}
	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

     friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

int main() {

	Vector2 a = { 2,3 };
	Vector2 b = a;// ����һ�ݸ���������Ϊ��������
	b.x = 5;

	std::cout << a.x << ", " << b.x << std::endl;

	Vector2* aa = new Vector2();

	Vector2* bb = aa;// ����ָ�룬���ջ�õ���ͬ�ĵ�ַ��Ȼ����Թ�ͬ���������Ӱ��

	bb ->x = 5;
	std::cout << aa->x << ", " << bb->x << std::endl;

	String string = "dodo";

	String second = string;

	std::cout << second << std::endl;

	std::cin.get();
}