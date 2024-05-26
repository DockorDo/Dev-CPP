#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity():m_Name("unknow"){}
    Entity(const String& name):m_Name(name){}
    
    const String& GetName(){return m_Name;}
};

int main(int argc, const char * argv[]) {
    int a = 2;
    int* b = new int[50];
    
    Entity* e = new Entity();// 当主动使用new关键字时，内存不会主动释放。
    Entity* e1 = (Entity*)malloc(sizeof(Entity));
//    如果主动创建了指针，就要记得主动删除指针。
    delete[] b;
    delete e;
    delete e1;
    
    
    std::cin.get();
}
