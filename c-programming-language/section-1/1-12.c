#include <stdio.h>

main() {
    int c;
    int is_space = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (is_space == 0) {
                is_space = 1;
                putchar('\n');
            }
        } else {
            is_space = 0;
            putchar(c);
        }
    }
}


