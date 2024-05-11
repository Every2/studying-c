#include <stdio.h>

main() {
    int c = 0;

    for (int i = 0; i < 10; i++) {
        if (i == ' ' || i == '\t' || i == '\n') {
            ++c;
        }
    }

    printf("%d", c);
}