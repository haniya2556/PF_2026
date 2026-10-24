#include <stdio.h>
int deposit(float *balance, float amount){
    if(amount > 0){
        return 1;
    }
    else{
        return 0;
    }
}
int withdraw(float *balance, float amount){
    if(amount <= *balance && amount > 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int option;
    float amount, balance = 1000;   
    do{
        printf("Choose option (1-4): ");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if(deposit(&balance, amount) == 0){
                    printf("Insufficient fund or invalid amount\n");
                }
                else{
                    balance = balance + amount;
                    printf("Amount deposited successfully\n");
                }
                break;
            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if(withdraw(&balance, amount) == 0){
                    printf("Insufficient fund or invalid amount\n");
                }
                else{
                    balance = balance - amount;
                    printf("Amount withdrawn successfully\n");
                }
                break;
            case 3: 
                printf("Current balance: %.2f\n", balance);
                break;
            case 4: 
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid option\n");
        }
    } while(option < 4);
    return 0;
}

