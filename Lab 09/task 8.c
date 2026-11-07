bool isSubsequence(char* s, char* t) {
    int i=0,j=0;
    while (t[j] != '\0' && s[i] != '\0') {
            i++;
        }
        j++;
    }
    return s[i] == '\0';
}
