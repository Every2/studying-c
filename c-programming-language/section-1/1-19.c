#include <stdio.h>

#define MAXLEN 1000

int line(char s[], int maxlen);
void reverse(char s[]);

int main() {
  char s[MAXLEN + 1];
  while (line(s, MAXLEN)) {
    reverse(s);
    printf("%s", s);
  }
}

int line(char s[], int maxlen) {
  char c;
  int i;
  for (i = 0; (c = getchar()) != EOF && i < maxlen - 1; i++) {
    s[i] = c;
    if (c == '\n')
      break;
  }
  s[i] = '\0';
  return i;
}

void reverse(char s[]) {
  int len = 0;
  for (len = 0; s[len] != '\0'; len++);

  if (len > 0 && (s[len - 1] == '\n')) {
    len--;
  }

  char temp;
  int i;
  for (i = 0; i < len / 2; i++) {
    int j = len - 1 - i;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}