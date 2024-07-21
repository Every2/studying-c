#include <stdio.h>

int rightrot(int x, int n) {
    //A posição do bit mais a direita de uma sequência de bits que começa na posição p e tem n bits é p + 1 - n
    // ou seja size of n * 8 == 32
    return x >> n | x << sizeof n * 8;
}

int main() {
    printf("%x", rightrot(0b11001100, 2));
}