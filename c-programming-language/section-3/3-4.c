#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[]) {
    int i, sign;

    sign = n;
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0';
    } while (n /= 10);
    if (sign < 0) { s[i++] = '-';}
    s[i] = '\0';
    reverse(s);
}

int main(void) {
    char s[50];
    itoa(INT_MIN, s);
    printf("%s\n", s);

    return 0;
}