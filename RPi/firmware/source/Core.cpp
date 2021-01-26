/**
* Source file containing the main thread of the robotic application
* 
* Author: Cedric Barre
* Year: 2020
*/

#include "Scheduling.h"
#include "Logger.h"

int main(int argc, char *argv[]) {
    
    Logger *logger = Logger::GetLogger();
    logger->PrintStamp();

    LOG_INFO("Initializing the main scheduler...\n");
    Scheduling scheduler (1000000.0f);
    LOG_INFO("Finished initializing the main scheduler...\n");

    while(1) {
        scheduler.RecordTic();

        LOG_INFO("Cycle check\n");
        scheduler.CycleSleep();
    }
}