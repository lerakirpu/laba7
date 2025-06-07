#include <cassert>
#include "task2.h"

void test_edge_cases() {
    assert(canReach(1, 1, 2, 1, 2) == false);   
}

int main() {
    test_edge_cases();
    return 0;
}
