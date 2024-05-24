#include <iostream>

// 定义类
// 如果想要定义一个充满功能的结构，并且要使用继承时，建议使用class
class Player
{
public:// 使用public 声明后的变量可以被外界访问
    int x, y;
    int speed;
    
    void Move(int xa,int ya)
    {
        x += xa * speed;
        y += ya;
    }

};
// 如果只是想要再结构中表示一些数据，则使用struct
struct Vec2
{
    float x,y;
    
    void Add(const Vec2& other){
        
    }
};

int main()
{
    Player player;
    player.x = 5;
    
    player.Move(3,2);
    std::cin.get();
}
