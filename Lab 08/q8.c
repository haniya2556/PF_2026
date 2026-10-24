#include<stdio.h>
int id;
void computeTotals(int(*marks)[3],int rows,int totals[]){
	int i,j;
	for(i=0;i<rows;i++){
	   for(j=0;j<3;j++){
		totals[i]=totals[i]+marks[i][j];
	   }
	   printf("Total for student %d: %d\n",i+1, totals[i]);
	}
}
int findTopper(const int *totals, int rows){
	int i, *max = totals;
	id=0;
     for (i = 1; i < rows; i++) {
        if (totals[i] > *max) {
            *max = totals[i];
            id=i+1;
        }
    }
    return *max;    
}
int main(){
	int marks[3][3],i,j,rows=3,totals[3] = {0};
	for(i=0;i<3;i++){
	   printf("Enter marks for Student %d (3 subjects): ",i+1);
	   for(j=0;j<3;j++){
		scanf("%d", &marks[i][j]);
	   }
	}
	computeTotals(marks,rows,totals);
	printf("Student %d is the topper with total %d", id,findTopper(&totals, rows) );
}
