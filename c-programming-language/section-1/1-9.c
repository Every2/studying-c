#include <stdio.h>

main() {
    int c;
    int is_space = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (is_space == 0) {
                is_space = 1;
                putchar(c);
            }
        }
         
        if ( c != ' ') {
            is_space = 0;
            putchar(c);
        }
    }
}