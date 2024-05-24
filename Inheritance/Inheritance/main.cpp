#include <iostream>

class Entity
{
public:
    float X,Y;
    
    void Move(float xa,float ya){
        X += xa;
        Y += ya;
    }
};
// 继承
class Player: public Entity
{
public:
    const char* Name;
  
    
    void PrintName(){
        std::cout << Name << std::endl;
    }
};

int main(){
    
    std::cout << sizeof(Entity) << std::endl;
    
    Player player;
    player.Move(5,5);
    player.X = 2;
    
    std::cout << player.X << std::endl;
    std::cout << player.Y << std::endl;
    std::cin.get();
}
