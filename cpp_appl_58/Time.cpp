#include "Time.h"
#include <ctime>

Time getCurrentTime() {
    time_t now = time(0);
    tm ltm;

    
#ifdef _MSC_VER
    localtime_s(&ltm, &now);
#else
    localtime_r(&now, &ltm);
#endif

    Time currentTime;
    currentTime.hours = ltm.tm_hour;
    currentTime.minutes = ltm.tm_min;
    currentTime.seconds = ltm.tm_sec;
    return currentTime;
}
