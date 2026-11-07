#include <stdio.h>
#include <string.h>
int main(){
    char first[100], last[50];
    printf("Enter first name: ");
    scanf("%s", &first);
    printf("Enter last name: ");
    scanf("%s", &last);
    strcat(first," ");
    strcat(first,last);
    printf("Full name: %s\n", first);
    return 0;
}

