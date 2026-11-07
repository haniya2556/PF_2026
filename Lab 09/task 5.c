#include <stdio.h>
#include <string.h>
int main(){
    char cities[5][50];
    int longest = 0,i,j;
    for (i = 0; i < 5; i++) {
        printf("Enter city %d: ", i + 1);
        scanf("%s", &cities[i]);
    }
    printf("\nAll cities entered:\n");
    for (j= 0; j< 5; j++) {
        printf("%s\n", cities[j]);
        if (strlen(cities[j])>strlen(cities[longest])) {
            longest = j;
        }
    }
    printf("\nLongest city: %s, Length: %d\n", cities[longest], strlen(cities[longest]));
    return 0;
}

