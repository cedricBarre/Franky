/**
* Header file containing definitions for everything related to logging information
* to the journal
*/
#include <stdio.h>

#define LOG_INFO(_fmt, ...) printf("[INFO] " _fmt, ##__VA_ARGS__);
#define LOG_DEBUG(_fmt, ...) printf("[DEBUG] " _fmt, ##__VA_ARGS__);

class Logger {

    public:
        Logger (const Logger& other) = delete;
        Logger& operator=(Logger& other) = delete;

        static Logger* GetLogger() noexcept;

        void PrintStamp();

    private:
        Logger() noexcept {};
};