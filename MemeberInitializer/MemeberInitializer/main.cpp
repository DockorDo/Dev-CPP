#include <iostream>

class Example
{
public:
    Example(){
        std::cout << "Create Entity" << std::endl;
    }
    
    Example(int x){
        std::cout << "Created Entity with" << x << std::endl;
    }
};

class Entity
{
private:
    int m_Score;
    std::string m_Name;
    Example m_Example;
public:
    Entity()
        : m_Name("Unknow"),m_Score(0),m_Example(Example(9))// 如果在这里初始化，则只初始化一次
    {
     // 如果在这里初始化，会初始化两次
    }
    Entity(const std::string& name)
        : m_Name(name)
    {
      
    }
    const std::string& GetName() const { return m_Name;}
};

int main(int argc, const char * argv[]) {
    
    Entity e0;
    std::cout << e0.GetName() << std::endl;
//    
//    Entity e1("DoDo");
//    std::cout << e1.GetName() << std::endl;
    std::cin.get();
}
