#include "Color.h"
#include <iostream>

void setConsoleTextColor(Color color) {
    switch (color) {
    case Color::BLACK:   std::cout << "\033[30m"; break;
    case Color::RED:     std::cout << "\033[31m"; break;
    case Color::GREEN:   std::cout << "\033[32m"; break;
    case Color::YELLOW:  std::cout << "\033[33m"; break;
    case Color::BLUE:    std::cout << "\033[34m"; break;
    case Color::MAGENTA: std::cout << "\033[35m"; break;
    case Color::CYAN:    std::cout << "\033[36m"; break;
    case Color::WHITE:   std::cout << "\033[37m"; break;
    default:             break;
    }
}
