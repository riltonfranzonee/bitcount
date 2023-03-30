#include <assert.h>
#include <stdio.h>

unsigned int bitcount(unsigned int number) {
    unsigned count = 0;
    for (int i = 0; i < sizeof(number) * 8; i++) {
        count += (number >> i) & 0b1;
    }
    return count;
}


int main() {
    assert(bitcount(0) == 0);
    assert(bitcount(1) == 1);
    assert(bitcount(3) == 2);
    assert(bitcount(8) == 1);
    // harder case:
    assert(bitcount(0xffffffff) == 32);
    printf("OK\n");
}
