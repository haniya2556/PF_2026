#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *ptr;
    char name[50];
    int count = 0,i,j;
    ptr = fopen("students.txt", "w");
    if (ptr == NULL) {
        printf("Error\n");
        exit(1);
    }
    printf("Enter 3 student names:\n");
    for(i=0;i<3;i++) {
        scanf("%s", name);
        fprintf(ptr,"%s\n",name);
        count++;
    }
    fclose(ptr);
    ptr = fopen("students.txt", "r");
    if (ptr == NULL) {
        printf("Error\n");
        exit(1);
    }
    printf("\nNames read from students.txt:\n");
    for(j=0;j<3;j++){
    	fscanf(ptr, "%s", name);
    	printf("%d. %s\n", j+1, name);
	}
    printf("Total students in file: %d\n", count);
    fclose(ptr);
    return 0;
}

