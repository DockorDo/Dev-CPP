#include <iostream>
#include <string>

/*
 虚函数允许我们覆盖子类中的方法
 虚函数需要额外的内存来存储所需的虚拟表信息
 让我们把它发送给一个带有参数的函数，该函数使用正确的指针指向基类中的虚拟表哥
 每次调用虚函数时，都会先去查看那个表中的映射，会造成额外的性能损失。
 */

class Entity
{
public:
    // 虚函数
   virtual std::string GetName(){return "Entity";}
    
};

class Player: public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
    : m_Name(name){}
    
    std::string GetName() override {return m_Name;}
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main(){
    Entity* e = new Entity();
    PrintName(e);
    std::cout << e ->GetName() << std::endl;
    
    Player* p = new Player("DoDo");
    PrintName(p);
    std::cout << p->GetName() << std::endl;
    
    Entity* entity = p;
    PrintName(entity);
    
    std::cin.get();
}
