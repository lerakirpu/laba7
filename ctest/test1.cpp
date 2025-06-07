#include <cassert>
#include "task2.h"

void test_basic() {
    assert(canReach(1, 1, 4, 4, 0) == false);   
}

int main() {
    test_basic();
    return 0;
}
