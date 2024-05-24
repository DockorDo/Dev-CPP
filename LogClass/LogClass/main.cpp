#include <iostream>

class Log
{
public:
    
    enum Level:char
    {
        LevelError = 0,LevelWarning,LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;
public:
   void SetLevel(Level level){
       m_LogLevel = level;
   }
    
    void Warn(const char* message){
        if(m_LogLevel >= LevelWarning)
        std::cout << "[Warning]: " << message << std::endl;
    }
    
    void Info(const char* message){
        if(m_LogLevel >= LevelInfo)
        std::cout << "[Info]: " << message << std::endl;
    }
    void Error(const char* message){
        if(m_LogLevel >= Log::LevelError)
        std::cout << "[Error]: " << message << std::endl;
    }

};

int main()
{
    Log log;
    log.SetLevel(Log::LevelWarning);
    log.Warn("Hello");
    log.Error("Hello DoDo");
    log.Info("Hello message");
    std::cin.get();
}
