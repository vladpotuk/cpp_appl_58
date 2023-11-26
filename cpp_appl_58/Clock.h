#ifndef CLOCK_H
#define CLOCK_H

#include "Time.h"
#include "Color.h"
#include "Config.h"
#include "InnerSize.h"

class Clock {
public:
    void start();
    void displayTime(const Time& time, const Color& color);
    void clearConsole();
};

#endif 
