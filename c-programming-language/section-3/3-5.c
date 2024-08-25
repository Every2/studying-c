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

void itob(int n, char s[], int b) {
    int i, sign;

    sign = n;
    i = 0;
    int j;
    do {
        j = abs(n % b);
        s[i++] =  (j <= 9) ? j + '0' : j - 10 + 'a';
    } while (n /= b);
    if (sign < 0) { s[i++] = '-';}
    s[i] = '\0';
    reverse(s);
}

int main(void) {
    char s[50];
    itob(INT_MIN, s, 10);
    printf("%s\n", s);

    return 0;
}