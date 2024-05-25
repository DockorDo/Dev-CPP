

#include <iostream>
// visibility可见性，是类的某些成员或方法可见范围
/*
    三个可见性关键字
    private:只有这个实体类可以访问这里的变量
    protected:只有当前类和子类能访问这里的变量
    public
 */

class Entity
{
protected:
    int X,Y;
    void Print(){}
public:
    Entity(){
        X = 0;
    }

};

class Player:public Entity
{
public:
    Player(){
        X = 2;
        Print();
    }
};
int main(int argc, const char * argv[]) {

    Entity e;
    
    
    std::cin.get();
}
