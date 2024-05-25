#include <iostream>
#include <string>

#include <stdlib.h>// C语言的标准库


int main(int argc, const char * argv[]) {

    using namespace std::string_literals;
    std::string name0 = "DoDo"s + "Hello";
    
    const char name[6] = "DoDo";
    const wchar_t* name2 = L"DoDO111";
    

    std::cout << strlen(name) << std::endl;
    std::cin.get();
    
}
