#include "InnerSize.h"
#include <chrono>
#include <thread>

void sleepFor(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
