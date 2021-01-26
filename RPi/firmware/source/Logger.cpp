/**
* Source file containing methods and variables for everything related to logging information
* to the journal
*/

#include "Logger.h"

Logger* Logger::GetLogger() noexcept{
    static Logger logger;

    return &logger;
}

void Logger::PrintStamp() {
    printf("\n************************************************\n"
           "*         FRANKY ROBOTICS APPLICATION          *\n"
           "*                                              *\n"
           "*           Firmware written in 2021           *\n"
           "*             Author: Cedric Barre             *\n"
           "*                                              *\n"
           "************************************************\n");
}