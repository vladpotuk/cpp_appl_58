#include "Clock.h"
#include "Time.h"
#include "Color.h"
#include "InnerSize.h"
#include "lib.h"  

void Clock::start() {
    while (true) {
        Time currentTime = getCurrentTime();
        displayTime(currentTime, Color::WHITE);
        sleepFor(1000); 
        clearConsole();
    }
}

void Clock::displayTime(const Time& time, const Color& color) {
    setConsoleTextColor(color);

    
    std::cout << "Current Time: " << time.hours << ":" << time.minutes << ":" << time.seconds << std::endl;
}

void Clock::clearConsole() {
    system("clear || cls"); 
}
