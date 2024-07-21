#include <stdio.h>

int bitcount(unsigned x) {
    int b;
    for (b = 0; x != 0; x &= x - 1)
        b++;
    return b;
}

int main() {
    printf("%d\n", bitcount(0b11001100));
    return 0;
}