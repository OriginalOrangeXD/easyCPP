#include <iostream>
#include "Log.h"

class Log
{
    public:
        const int LogLevelError = 0;
        const int LogLevelWarrning = 1;
        const int LogLevelInfo = 2;
    private:
        int m_LogLevel;
    public:
        void SetLevel(int level)
        {
           m_LogLevel = level;
        }

        void Error(const char* message)
        {
            std::cout << "[ERROR]: " << message << std::endl;
        }
        void Warn(const char* message)
        {
            std::cout << "[WARNING]: " << message << std::endl;
        }
        void Info(const char* message)
        {
            std::cout << "[INFO]: " << message << std::endl;
        }
};
