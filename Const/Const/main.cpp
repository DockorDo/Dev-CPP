#include <iostream>
#include <string>

class Entity
{
private:
    int m_X,m_Y;
public:
    int GetX()const // 只能在类内使用，表示当前方法不会修改类
    {
        return m_X;
    }
    void setX(int x){
        m_X = x;
    }
};
void PrintEntity(Entity& e){
    std::cout << e.GetX() << std::endl;
}

int main(int argc, const char * argv[]) {

    Entity e;
    
    
    const int MAX_AGE = 90;
    
    int* a = new int;
    int const* b = new int;// const 在*之前代表无法再分配指针，const int*也是一样
    int* const a1 = new int;// const 在*之后表示可以修改指针内容，但不可以动地址
    
    
    *a1 = 2;
    
    a = (int*)&MAX_AGE;
    std::cout << *a << std::endl;
    
    std::cin.get();
}
