#include <stdio.h>
int square(int x) {
    return x*x;
}
int negate(int x) {
    return -x;
}
int isEven(int x) {
    return x%2 == 0;
}
int isPositive(int x) {
    return x>0;
}
void applyToArray(int *arr, int n, int (*fn)(int)) {
	int i;
    for (i = 0; i < n; i++) {
        arr[i] = fn(arr[i]);
    }
}
int countIf(const int *arr, int n, int (*pred)(int)) {
    int count = 0,i;
    for (i = 0; i < n; i++) {
        if (pred(arr[i])) {
            count++;
        }
    }
    return count;
}
void printGeneric(void *data, char type, int n) {
	int i,j,k;
    if (type == 'i') {
        int *int_data = (int *)data;
        for (i = 0; i < n; i++) {
            printf("%d ", int_data[i]);
        }
        printf("\n");
    } else if (type == 'f') {
        float *float_data = (float *)data;
        for (j = 0; j < n; j++) {
            printf("%.2f ", float_data[i]);
        }
        printf("\n");
    } else if (type == 'c') {
        char *char_data = (char *)data;
        for (k = 0; k<n; k++) {
            printf("%c ", char_data[i]);
        }
        printf("\n");
    } else {
        printf("Invalid type '%c' for printGeneric\n", type);
    }
}
int main() {
    int arr[50] = {3, -2, 8, -5, 6};
    int n;
    while (1) {
        printf("Enter n (1-50): ");
        if (scanf("%d", &n) == 1 && n >= 1 && n <= 50) {
            break;
        }
        printf("Invalid input. Please enter a value between 1 and 50.\n");
        while (getchar() != '\n');
    }
    printf("Original: ");
    printGeneric(arr, 'i', n);
    applyToArray(arr, n, negate);
    printf("After negate: ");
    printGeneric(arr, 'i', n);
    int positiveCount = countIf(arr, n, isPositive);
    printf("Positive values after negate: %d\n", positiveCount);
    int evenCount = countIf(arr, n, isEven);
    printf("Even values after negate: %d\n", evenCount);
    float floatSample[] = {1.50, 2.25};
    printf("Float print (type f): ");
    printGeneric(floatSample, 'f', 2);
    printGeneric(NULL, 'x', 0);
    return 0;
}
