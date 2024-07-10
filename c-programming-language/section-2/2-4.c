#include <stdio.h>

void squeeze(char s[], char n[]) {
    int i , j;

    for (int k = 0; n[k] != '\0'; k++) {
        for (i = j = 0; s[i] != '\0'; i++) {
            if (s[i] != n[k]) {
                s[j] = s[i];
                j++;
            }
        }
        s[j] = '\0';
    }
}
