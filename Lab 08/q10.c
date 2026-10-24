#include<stdio.h>
int add(int a, int b, int *result) {
    *result = a + b;
    return 1;
}
int subtract(int a, int b, int *result) {
    *result = a - b;
    return 1;
}
int multiply(int a, int b, int *result) {
    *result = a * b;
    return 1;
}
int divide(int a, int b, int *result) {
    if (b == 0) {
        return 0;
    }
	*result = a / b;
    return 1;
}
int main(){
    int (*ops[])(int, int, int*) = {add, subtract, multiply, divide};
    const char *op_names[] = {"Add", "Subtract", "Multiply", "Divide"};
    int choice;
    int num1, num2, result;
    do{
        printf("Choice (1-5): ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Goodbye.\n");
            break;
        }
        if (choice < 1 || choice > 5) {
            printf("Invalid choice\n");
            continue;
        }
        int index = choice - 1;
        printf("Enter a and b: ");
        scanf("%d %d", &num1, &num2);
        if (ops[index](num1, num2, &result)) {
            printf("%s result: %d\n", op_names[index], result);
        } else {
            printf("Error: division by zero\n");
        }
    }while(choice!=5);
    return 0;
}
