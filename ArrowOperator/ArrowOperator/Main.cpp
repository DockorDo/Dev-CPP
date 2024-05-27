#include <iostream>
#include <string>

class Entity
{
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

struct Vector3
{
	float x, y, z;
};

int main() {
	Entity e;
	e.Print();

	Entity* ptr = &e;
	Entity& entity = *ptr;

	ptr->Print();

	int offset = (int)&((Vector3*)nullptr)->z;// »ñµÃÆ«ÒÆÁ¿
	std::cout << offset << std::endl;

	std::cin.get();
}