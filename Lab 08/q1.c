#include<stdio.h>
void bubbleSort(int *arr, int n) {
    int j,i = 0;
    int swapped = 1,temp;
    while (swapped==1) {
        swapped = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
            	temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                swapped = 1; 
            }
        }
        i++; 
    }
}
void printArray(const int *arr, int n){
	int j;
	for (j=0;j<n;j++){
		printf("%d ", *(arr + j));
	}
}
int main(){
	int n;
	printf("Enter number of scores: ");
	scanf("%d", &n);
	while(n<1||n>20){
		printf("Invalid Size");
		printf("\nEnter number of scores: ");
	    scanf("%d", &n);
	}
	int arr[n-1],i,j;
	printf("Enter scores:\n");
	for (i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Before Sorting: ");
	printArray(arr,n);
	bubbleSort(arr, n);
	printf("\nAfter sorting: ");
	printArray(arr,n);
	return 0;
}
