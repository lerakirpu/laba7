#include <iostream>
#include "task5.h"
bool search(unsigned fx, unsigned fy) {
    while (true) {
        if (fx < 1 || fy < 1) return false;   // Вышли за пределы сетки
        if (fx == 1 && fy == 1) return true;  // Достигли стартовой точки
        if (fx == fy) return false;           // Невозможно уменьшить

        // Применяем обратные операции
        if (fx % 2 == 0 && fy % 2 == 0) {
            // Оба четные - делим на 2
            fx /= 2;
            fy /= 2;
        } else if (fx % 2 == 0) {
            fx /= 2;
        } else if (fy % 2 == 0) {
            fy /= 2;
        } else {
            // Оба нечетные - вычитаем меньшее из большего
            if (fx > fy) {
                fx -= fy;
            } else {
                fy -= fx;
            }
        }
    }
}