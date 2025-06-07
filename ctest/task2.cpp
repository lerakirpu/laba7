#include "task2.h"
#include <cmath>

bool canReach(int sx, int sy, int fx, int fy, uint32_t t) {
    int dx = abs(fx - sx);
    int dy = abs(fy - sy);
    
    // Минимальное необходимое время
    uint32_t min_time = static_cast<uint32_t>(std::max(dx, dy));
    
    // Если t меньше минимального времени, достичь невозможно
    if (t < min_time) {
        return false;
    }
    
    // Если осталось "лишнее" время, оно должно быть чётным 
    uint32_t extra_time = t - min_time;
    if (extra_time % 2 != 0) {
        return false;
    }
    
    return true;
}