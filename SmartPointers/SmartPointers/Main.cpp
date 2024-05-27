#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity() {
		std::cout << "Created Entity" << std::endl;
	}

	~Entity() {
		std::cout << "Destroy Entity!" << std::endl;
	}
	void Print() {}
};

int main()
{
	std::shared_ptr<Entity> e0;
	std::weak_ptr<Entity> e1;
	{
		// 智能指针实际上是由make)unique构造，如果构造函数内出现了意外，会造成悬空指针，从而引起内存泄漏
		// 智能指针不允许被复制
		std::unique_ptr<Entity> entity(new Entity());

		std::unique_ptr<Entity> entity1 = std::make_unique<Entity>();

		// 如果想要复制指针，则可以替换为共享指针
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

		std::shared_ptr<Entity> sharedEntity1(new Entity);

		e0 = sharedEntity;

		e1 = sharedEntity1;
	}


	std::cin.get();
}