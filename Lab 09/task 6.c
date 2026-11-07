#include <stdio.h>
#include <string.h>
int main(){
    char names[5][50],temp[50];
    int i,j,k,l;
    for (i=0;i<5;i++) {
        printf("Enter student name %d: ",i+1);
        scanf("%s", names[i]);
    }
    for (k=0;k<4;k++) {
        for (j=0;j<4-k;j++) {
            if (strcmp(names[j],names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    printf("\nSorted list of students:\n");
    for (l= 0;l<5;l++) {
        printf("%s\n", names[l]);
    }
    return 0;
}

