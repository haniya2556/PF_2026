#include<stdio.h>
float averageSteps(int *steps,int n){
    int sum = 0,i;
    for (i = 0; i < n; i++) {
        sum =sum+ *(steps + i);
    }
    return (float)sum / n;
}
int countGoalDays(int *steps, int n, int goal) {
    int count = 0,i;
    for (i = 0; i < n; i++) {
        if (*(steps + i) >= goal) {
            count++;
        }
    }
    return count;
}
int main() {
    int steps[7],n = 7,goal = 8000,i;
    for (i = 0; i < n; i++) {
        printf("Enter steps for day %d: ", i + 1);
        scanf("%d", &steps[i]); 
    }
    float avg = averageSteps(steps, n);
    int goalDays = countGoalDays(steps, n, goal);
    printf("\nAverage steps: %.2f\n", avg);
    printf("Days goal reached (8000 or more): %d\n", goalDays);
    return 0;
}
