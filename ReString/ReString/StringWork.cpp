#include <iostream>
#include <string>

/*
 字符串就是字母、数字、字符
 基本上是固定的
 */

void PrintString(const std::string& string){

    std::cout <<"Print:"<< string << std::endl;
}
void StringWork(){
    const char* name0 = "dodo";
    std::string name1 = std::string("dodo")+" Hello!";// 拼接
    char name2[5] = {'D','o','D','o','\0'};
    bool containes = name1.find("lo")!=std::string::npos;// 判断是否包含字符串
    
    PrintString(name1);
    std::cout << "name2 " << name2 << std::endl;
    std::cout << "name0 " << name0 << std::endl;
    std::cout << "name1 " << name1 << std::endl;
    std::cout << containes << std::endl;
}
