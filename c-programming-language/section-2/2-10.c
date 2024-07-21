#include <stdio.h>

int lower(int c) {
  return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

int main() {
    putchar(lower('T'));
    putchar(lower('t'));
    putchar('\n');
    return 0;
}