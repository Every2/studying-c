#include <stdio.h>


int is_alpha_numeric(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

void expand(char s1[], char s2[]) {
    char before;
    int j = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        char next = s1[i + 1];
        if (s1[i] == '-' && before != '\0' && next != '\0' && before < next && is_alpha_numeric(before) && is_alpha_numeric(next)) {
            while (before < next - 1) {
                s2[j++] = ++before;
            }
            before = '\0';
        } else {
            s2[j++] = s1[i];
            before = s1[i];
        }
    }
    s2[j] = '\0';
}



int main() {
    char s1[100] = "a-zA-Z0-9";
    char s2[100];

    expand(s1, s2);
    printf("%s\n", s2);

    return 0;
}
