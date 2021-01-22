/**
* Header file containing definitions for everything related to threading and timing 
* in the robotic application
*/
#include <thread>
#include <chrono> 
#include <ratio>

class Scheduling {

    public:
        Scheduling() noexcept;
        Scheduling(int usec) noexcept;
        ~Scheduling(); 

        void    RecordTic();
        double  TriggerToc();
        void    CycleSleep();

    private:
        double cycle_lap;
        std::chrono::steady_clock::time_point tic;
};