#include <cassert>
#include "task2.h"

void test_diagonal() {
    assert(canReach(1, 1, 2, 2, 1) == true);
}

int main() {
    test_diagonal();
    return 0;
}
