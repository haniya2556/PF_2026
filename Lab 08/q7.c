#include<stdio.h>
void reverseArray(int *arr,int n){
	int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
void printArray(const int *arr, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", *(arr+i));
	}
}
int main(){
	int n,i;
	printf("Enter number of songs: ");
	scanf("%d",&n);
	while(n>20||n<1){
		printf("Invalid size\n");
		printf("Enter number of songs: ");
		scanf("%d",&n);
	}
	int arr[n];
	printf("Enter song IDs: ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Original: ");
	printArray(arr,n);
	reverseArray(arr,n);
	printf("\nReversed: ");
	printArray(arr,n);
	return 0;
}
