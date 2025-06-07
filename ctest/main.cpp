#include <iostream>
#include "task2.h"

int main() {
    int sx, sy, fx, fy;
    uint32_t t;
    
    std::cout << "Enter start (x y): ";
    std::cin >> sx >> sy;
    
    std::cout << "Enter finish (x y): ";
    std::cin >> fx >> fy;
    
    std::cout << "Enter time (t): ";
    std::cin >> t;
    
    std::cout << "Can reach: " << (canReach(sx, sy, fx, fy, t) ? "true" : "false") << std::endl;
    return 0;
}
