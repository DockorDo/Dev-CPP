#include <iostream>

// 使用extern 标记的变量代表外部变量
//extern int s_Variable;
static int s_Variable = 10;

struct Entity
{
   int x,y;
    

};

static void Print(Entity e)
 {
     std::cout << e.x << "," << e.y << std::endl;
 }

int main(){
    std::cout << s_Variable << std::endl;
    std::cout << "==========================" << std::endl;
    
    Entity e;
    e.x = 2;
    e.y = 3;
    
    Entity e1;
    e1.x = 5;
    e1.y = 8;
    
    Print(e);
    Print(e1);
    
    std::cin.get();
}
