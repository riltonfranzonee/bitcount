#include <assert.h>
#include <stdio.h>

int bitcount(signed int number) {
    int count = 0;
    while (number) {
        number &= (number - 1); // added explenation on how this works on page 51 of K&R
        count++;
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
