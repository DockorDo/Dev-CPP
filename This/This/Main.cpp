#include <iostream>
#include <string>

void PrintEntity(const Entity* e);
// this是指向当前实例的指针
class Entity
{
public:
	int x, y;
	
	Entity(int x, int y)
		:x(x),y(y)
	{
		Entity* e = this;
		
		this->x = x;
		this->y = y;

		PrintEntity(*this);
	}

	int GetX() const
	{
		const Entity* e = this;
		return x;
	}
};
void PrintEntity(const Entity* e) {

}
int main() {

	std::cin.get();
}