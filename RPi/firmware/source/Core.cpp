/**
* Source file containing the main thread of the robotic application
* 
* Author: Cedric Barre
* Year: 2020
*/
#include <stdio.h>

#include "Scheduling.h"

int main(int argc, char *argv[]) {

    printf("\n************************************************"
           "*         FRANKY ROBOTICS APPLICATION          *"
           "*                                              *"
           "*           Firmware written in 2021           *"
           "*             Author: Cedric Barre             *"
           "*                                              *"
           "************************************************\n");
    printf("Initializing the main scheduler...\n");
    Scheduling scheduler (5000);
    printf("Finished initializing the main scheduler...\n");

    while(1) {
        scheduler.RecordTic();

        printf("Cycle check\n");
        
        scheduler.RecordTic();
    }
}