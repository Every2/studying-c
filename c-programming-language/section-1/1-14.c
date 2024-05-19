#include <stdio.h>

main() {
    int c;
    
    int chars[26];

    for (int i = 0; i < 26; ++i) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            chars[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        printf("%2c | ", 'a' + i); 
        for (int j = 0; j < chars[i]; ++j) {
            putchar('='); 
        }
        putchar('\n');
    }
    
}
