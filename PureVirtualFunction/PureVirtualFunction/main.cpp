#include <iostream>

// Cpp 纯虚函数类似于Java或C#的接口或抽象类
// 如果子类没有实现纯虚函数，就不能实例化它

class Printable {
public:
    virtual std::string GetClassName() = 0;
};

class Entity: public Printable
{
public:
    virtual std::string GetName() = 0;// 当虚函数最后 = 0时，则为纯虚函数
};

class Player:public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
    : m_Name(name) {}
    
    std::string GetName() override {return m_Name;}
    
    std::string GetClassName() override {return "Entity";}
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

class A:public Printable
{
public:
    std::string GetClassName() override {return "A";}
};

void Print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}


int main(){
    
    Entity* e = new Player("");// 纯虚函数必须由其他实现了虚函数的类所实例化，类似于接口；但不是接口，只是类的规则
//    PrintName(e);
    
    Player* p = new Player("DoDo");
//    PrintName(p);
    
    Print(e);
    Print(e);
    
    Print(new A);
    
    std::cin.get();
}
