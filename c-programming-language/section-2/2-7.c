#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
    return x ^ (~(~0 << n) << (p + 1 - n));
}

int main() {
    printf("%x\n", invert(0b11001100, 5, 4));
    return 0;
}