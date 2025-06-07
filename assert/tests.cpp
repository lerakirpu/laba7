#include <cassert>
#include <iostream>

// Объявления функций из задач
int mop(int n, int time);  

void testTask1() {
    assert(mop(82, 26) == 27);
    assert(mop(9, 4) == 5);
    assert(mop(76, 23) == 24);
}

// Запуск всех тестов
void runAllTests() {
    testTask1();
    std::cout << "All tests passed!" << std::endl;
}
