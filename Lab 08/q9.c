#include<stdio.h>
int sumShelf(const int *shelves, int count){
	int sum=0,i;
	for(i=0;i<count;i++){
		sum=sum+*(shelves+i);
	}
	return sum;
}
int findLargestShelf(const int *counts,int shelf){
	int index = 0,i;
    for (i = 1; i < shelf; i++) {
        if (*(counts + i) > *(counts + index)) {
            index = i;
        }
    }
    return index;
}
int main(){
	int shelfA[]={101,102,103},i;
	int shelfB[]={201,202};
	int shelfC[]={301,302,303,304};
	int *shelves[]={shelfA,shelfB,shelfC};
	int counts[]={3,2,4};
	int shelf = sizeof(counts) / sizeof(counts[0]);
    for (i = 0; i < shelf; i++) {
        int total = sumShelf(shelves[i], counts[i]);
        printf("Shelf %d ID total: %d\n", i + 1, total);
    }
    int largest_idx = findLargestShelf(counts, shelf);
    printf("Shelf with the most books: Shelf %d (%d books)\n", 
           largest_idx + 1, counts[largest_idx]);
    return 0;
}
