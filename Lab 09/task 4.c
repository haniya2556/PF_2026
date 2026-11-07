#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100],*p;
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    p = strchr(sentence,'a');
    if (p != NULL) {
        printf("First 'a' found at index %d\n", p - sentence);
    } else {
        printf("'a' not found in the sentence.\n");
    }
    if (strstr(sentence,"good")) {
        printf("Word 'good' found.\n");
    } else {
        printf("Word 'good' not found.\n");
    }
    return 0;
}

