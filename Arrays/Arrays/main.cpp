#include <iostream>
#include <array>
/*
    数组是一个集合或元素，它是一堆按特定顺序排列的东西
 */

class Entity
{
public:
    static constexpr const int exampleSize = 5;
    int example[exampleSize];
    
    std::array<int,5> another;
    
    Entity(){

        
        for(int i = 0;i< another.size();i++)
            example[i]=2;
    }
};
int main() {
    
    Entity e;
    

    int example[5];
//    example[0] = 2;
//    example[4] = 4;
    
    for(int i = 0; i< 5;i++){
        example[i]=i;
    }
    
    int* ptr = example;
    example[2] = 5;
    *(ptr +2) = 6;
    
    

    int a = example[0];
    *(int*)((char*)ptr + 8) = 6;
//    example[-1]=x;写入了其他内存中
//    example[5]=y;
    int* another = new int[5];
    for(int i = 0;i<5;i++)
        another[i] =2;
    delete[] another;
    
    std::cout << example[0] << std::endl;
    std::cout << example << std::endl;
    
    std::cin.get();
}
