#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name) :m_Name(name), m_Age(-1) {}
    explicit Entity(int age) :m_Name("unknown"), m_Age(age) {}// ǿ����ʽת��
};

static void PrintEntity(const Entity& entity)
{

}

int main() {

	PrintEntity(Entity("DoDo"));
	PrintEntity((Entity)18);

	Entity a = Entity("dodo");// ��ʽת��
	Entity b = (Entity)22;

	std::cin.get();
}