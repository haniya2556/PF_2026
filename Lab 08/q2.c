#include<stdio.h>
void swapValues(int *a, int *b){
	int temp;
	temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
	int a,b;
	printf("Enter price A: ");
	scanf("%d",&a);
	printf("\nEnter price B: ");
	scanf("%d",&b);
	printf("Before Swap: A=%d, B=%d",a,b);
	swapValues(&a,&b);
	printf("\nAfter Swap: A=%d, B=%d",a,b);
	return 0;
}
