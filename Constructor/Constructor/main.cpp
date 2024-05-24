#include <iostream>

class Entity
{
public:
    float X,Y;
    
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created Entity!" << std::endl;
    }

    // 析构函数，析构函数以~开头
    // 析构函数是一个特殊的函数/方法，它会在对象被销毁时调用。
    // 可以在析构函数中进行取消初始化或销毁的操作，否则会早成内存泄露
    ~Entity(){
        std::cout << "Destroyed Entity" << std::endl;
    }
    void Print(){
        std::cout << X << "," << Y <<std::endl;
    }
};

void Function(){
    Entity e;
    std::cout << e.X << "," << e.Y << std::endl;
    // 调用析构函数
    e.~Entity();
}
int main(){
    Function();
    std::cin.get();
}
