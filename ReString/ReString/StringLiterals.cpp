#include <iostream>
#include <string>
#include <stdlib.h>


void StringLiterals(){
    using namespace std::string_literals;

    std::string hello = "Hello "s + "World!";
    std::u32string hellow = U"Hello"s + U" world";
    
    const char* example = R"(Line1
Lin2
Line3
)";
    
    char changeName[]="DoDo hello world";
    changeName[5]= ',';
    
    std::cout<< changeName << std::endl;
    
    const char* name ="dodo1";
    const wchar_t* name2 = L"dodo2";
    
    const char16_t* name3 = u"dodo3";
    const char32_t* name4 = U"dodo4";
}
