#include <iostream>

class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() {

		static Singleton instance;

		return instance;
	}

	void Hello() {}
};

Singleton* Singleton::s_Instance = nullptr;

void Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() {
	Singleton::Get().Hello();

	Function();
	Function();
	Function();
	Function();
	Function();
	std::cin.get();
}