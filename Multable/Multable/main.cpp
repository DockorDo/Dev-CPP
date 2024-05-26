#include <iostream>

class Entity
{
private:
    std::string m_Name ="DoDo";
    mutable int m_DebugCount = 0;
public:
    const std::string& GetName()const
    {
        m_DebugCount++;
        return m_Name;
    }
};
int main(int argc, const char * argv[]) {
    Entity e;
    std::cout <<  e.GetName() << std::endl;
    
    int x = 8;
    auto f = [&]() mutable// 允许lambda函数内修改函数外的变量
    {
        x++;
        std::cout <<"Hello "<< x << std::endl;
    };
    
    f();
    
    std::cin.get();
}
