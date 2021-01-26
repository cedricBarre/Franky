/**
* Source file containing methods and variables for everything related to threading and timing 
* in the robotic application
*/
#include "Scheduling.h"
#include "Logger.h"

Scheduling::Scheduling() noexcept{
    
    this->cycle_lap = 1;
}

Scheduling::Scheduling(double usec) noexcept{

    this->cycle_lap = usec;
}

Scheduling::~Scheduling() {

}

void Scheduling::RecordTic() {
    
    tic = std::chrono::steady_clock::now();
}

double Scheduling::TriggerToc() {

    std::chrono::steady_clock::time_point toc = std::chrono::steady_clock::now();

    std::chrono::duration<double, std::ratio<1,1000000>> time_span = std::chrono::duration_cast<std::chrono::duration<double, std::ratio<1,1000000>>>(toc - tic);

    return time_span.count();
}

void Scheduling::CycleSleep() {

    double elapsed_time = TriggerToc();
    if (cycle_lap > elapsed_time) {
        std::this_thread::sleep_for(std::chrono::duration<double, std::ratio<1,1000000>>(cycle_lap - elapsed_time));
    }
}