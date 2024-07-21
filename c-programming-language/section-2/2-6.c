#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, int y) {
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}

int main() {
    printf("%x\n", setbits(0xAC, 7, 4, 0xB));
    return 0;
}
