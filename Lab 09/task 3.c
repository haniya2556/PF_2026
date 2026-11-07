#include <stdio.h>
#include <string.h>
int main(){
    char password[] = "lab10pass", input[50];
    printf("Enter password: ");
    scanf("%s",&input);
    if (strcmp(input, password) == 0) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }
    if (strncmp(input, password, 3) == 0) {
        printf("First 3 characters match.\n");
    } else {
        printf("First 3 characters do not match.\n");
    }
    return 0;
}

