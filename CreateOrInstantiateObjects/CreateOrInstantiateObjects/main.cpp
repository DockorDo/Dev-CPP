#include <iostream>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity(): m_Name("Unknow"){}
    Entity(const String& name) : m_Name(name){}
    
    const String& GetName() const {return m_Name;}
};

int main(int argc, const char * argv[]) {

    Entity entity;
    std::cout << entity.GetName() << std::endl;
    
    Entity entity1("DoDo");
    std::cout << entity1.GetName() << std::endl;
    Entity* en;
    {
        
        Entity* e = new Entity("DODO!!!");
     
        en = e;
        
        std::cout << (*e).GetName() << std::endl;
        std::cout << e->GetName() << std::endl;
        std::cout << "1111" << en->GetName() << std::endl;
        delete e;
    }
    std::cin.get();
}
