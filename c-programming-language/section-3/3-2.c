#include <stdio.h>

void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    while (t[i] != '\0') {
        switch (t[i]) {
            case '\n':
                s[j] = '\\';
                j++;
                s[j] = 'n';
                j++;
                i++;
                break;
            case '\t':
                s[j] = '\\';
                j++;
                s[j] = 't';
                j++;
                i++;
                break;
            default:
                s[j] = t[i];
                j++;
                i++;
                break;
        }
    }
    s[j] = '\0';
}

int main(void) {
    char str1[20];
    char str2[] = "\tTeste\n";
    escape(str1, str2);
    printf(str1);
    return 0;
}