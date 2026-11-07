#include <stdio.h>
#include <string.h>
int main(){
    char name[50], copy[50];
    printf("Enter name: ");
    fgets(name, 50, stdin);
    strcpy(copy, name);
    printf("Copy: %s\n", copy);
    int length=strlen(name), size= sizeof(name);
    printf("sizeof = %d\n",size);
    printf("strlen = %d\n", length);
    return 0;
}

