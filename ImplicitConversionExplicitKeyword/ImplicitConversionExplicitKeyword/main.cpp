#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name) :m_Name(name), m_Age(-1) {}
    explicit Entity(int age) :m_Name("unknown"), m_Age(age) {}// 强制显式转换
};

static void PrintEntity(const Entity& entity)
{

}

int main() {

	PrintEntity(Entity("DoDo"));
	PrintEntity((Entity)18);

	Entity a = Entity("dodo");// 隐式转换
	Entity b = (Entity)22;

	std::cin.get();
}