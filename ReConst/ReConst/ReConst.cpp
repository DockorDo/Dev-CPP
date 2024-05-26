#include <iostream>

class Entity
{
private:
    int* m_X,*m_Y;
public:
    Entity(){
        *m_X = 1;
        *m_Y = 2;
    }
   int* GetX()const
    {
        return m_X;
    }
    const int* const onlyGet()const{
        return  m_Y;
    }
    int* onlyGet(){
        return m_Y;
    }
};
void ReConst(){
    Entity e;
    
    
    const int MAX_AGE = 90;// 无法修改指针的内容
    
    const int*  a = new int;// const 放在指针前，表示无法修改指针，但能修改内容
    int* const b = new int;// const 放在指针后，表示无法修改指针内容，但能修改指针
    
    a = (int*)&MAX_AGE;// 更改指针
    
    *b = 2;
    std::cout << a << std::endl;
}
