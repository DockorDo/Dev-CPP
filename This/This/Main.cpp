#include <iostream>
#include <string>

void PrintEntity(const Entity* e);
// this��ָ��ǰʵ����ָ��
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