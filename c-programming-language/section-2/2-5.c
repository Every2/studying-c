int any(char s[], char n[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; n[j] != '\0'; j++) {
            if (s[i] == n[j]) {
                return i;
            }
        }
    }
    return -1;
}
