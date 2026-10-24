#include<stdio.h>
int isValidMark(int m){
	if(m>=0 && m<=100){
		return 1;
	}
		return 0;
}
	void findMinMax(int arr[], int size, int *min, int *max) {
	int i;
    *min = 101;
    *max = -1;
     for (i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
int main(){
	int marks[4], size=5,min,max,i;
	for(i=0;i<5;i++){
		printf("Enter Mark %d: ",i+1);
		scanf("%d",&marks[i]);
		while (isValidMark(marks[i])==0) {
    printf("\nInvalid mark, enter again\n");
    printf("\nEnter Mark %d: ", i + 1);
    scanf("%d", &marks[i]);
	}
	}
	findMinMax(marks, size, &min, &max);
	printf("\nLowest Mark: %d",min);
	printf("\nHighest Mark: %d",max);
}
