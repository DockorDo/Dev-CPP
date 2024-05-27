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
		// ����ָ��ʵ��������make)unique���죬������캯���ڳ��������⣬���������ָ�룬�Ӷ������ڴ�й©
		// ����ָ�벻��������
		std::unique_ptr<Entity> entity(new Entity());

		std::unique_ptr<Entity> entity1 = std::make_unique<Entity>();

		// �����Ҫ����ָ�룬������滻Ϊ����ָ��
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

		std::shared_ptr<Entity> sharedEntity1(new Entity);

		e0 = sharedEntity;

		e1 = sharedEntity1;
	}


	std::cin.get();
}