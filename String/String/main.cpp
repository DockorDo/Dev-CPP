#include <iostream>
#include <string>

void PrintString(const std::string& string){
    std::cout << string << std::endl;
}

// 字符串本质上是由一组字符组成，可以代表字母、数字、符号
int main(int argc, const char * argv[]) {

    std::string name0 = "DoDo 000";
    const char* name1 = "DoDo 111";
    
    char name2[5] = {'D', 'o', 'D', 'o' , '\0'};
    
    
    // 附加字符串
    // 方式一
    std::string addStr = std::string("Hello ") + "World";// 先生成字符串然后组合成一个字符串
    // 方式二
    addStr += ",DoDo";
    
    std::cout << addStr << std::endl;
    
//    查找字符串
   bool contains = addStr.find("lo") != std::string::npos;
    
    
    std::cout << name2 << std::endl;
    std::cout << name1 << std::endl;
    std::cout << name0 << std::endl;
    std::cin.get();
    
    return 0;
}
