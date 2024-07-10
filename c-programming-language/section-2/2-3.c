#include <stdio.h>

int is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    if (c >= 'a' && c <= 'f') {
        return 1;
    }
    if (c >= 'A' && c <= 'F') {
        return 1;
    }
    return 0;
}

int htoi(char s[]) {
    int n = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        for (int i = 2; is_digit(s[i]); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                n = 16 * n + (s[i] - '0');
            }
            if (s[i] >= 'a' && s[i] <= 'f') {
                n = 16 * n + (s[i] - 'a' + 10);
            }
            if (s[i] >= 'A' && s[i] <= 'F') {
                n = 16 * n + (s[i] - 'A' + 10);
            }
        }
        return n;
    }
    for (int i = 0; is_digit(s[i]); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = 16 * n + (s[i] - '0');
        }
        if (s[i] >= 'a' && s[i] <= 'f') {
            n = 16 * n + (s[i] - 'a' + 10);
        }
        if (s[i] >= 'A' && s[i] <= 'F') {
            n = 16 * n + (s[i] - 'A' + 10);
        }
    }
    return n;
}

int main(void) {
    char hexa[] = "0x1A";
    printf("%d\n", htoi(hexa));
    return 0;
}
