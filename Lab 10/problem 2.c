#include <stdio.h>
#include <string.h>
struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int releaseYear;
    int rating;
};
int main(){
    struct Movie m[50];
    int count=0,choice,found,i,j;
    char searchGenre[50];
    do {
        printf("\n1. Add New Movie\n2. Search Movies by Genre\n3. Display All Movies\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
            	if (count >= 50) {
                    printf("\nMovie database is full!\n");} 
	            else {
                    printf("\nEnter Movie Title: ");
                    scanf("%s", &m[count].title);
                    printf("Enter Genre: ");
                    scanf("%s", &m[count].genre);
                    printf("Enter Director: ");
                    scanf("%s", &m[count].director);
                    printf("Enter Release Year: ");
                    scanf("%d", &m[count].releaseYear);
                    printf("Enter Rating (out of 10): ");
                    scanf("%d", &m[count].rating);
                    count++;
                    printf("Movie added successfully!\n");
                }
                break;
            case 2:
                printf("\nEnter genre to search: ");
                scanf(" %s", &searchGenre);
                found=0;
                for (i=0;i<count;i++) {
                    if (strcmp(m[i].genre, searchGenre) == 0) {
                        printf("Title: %s Director: %s Year: %d Rating: %d\n",m[i].title, m[i].director,m[i].releaseYear, m[i].rating);
                        found = 1;
                        }
                    }
                if (!found) {
                        printf("No movies found for this genre.\n");
                    }
                break;
            case 3:
                    for (j=0;j<count;j++) {
                        printf("%d. Title: %s Genre: %s Director: %s Year: %d Rating: %d\n",j+1, m[j].title, m[j].genre,m[j].director, m[j].releaseYear,m[j].rating);
                    }
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);
    return 0;
}

