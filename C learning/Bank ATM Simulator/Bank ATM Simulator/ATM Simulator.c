//
//  main.c
//  Bank ATM Simulator
//
//  Created by Greiner Chan on 7/20/20.
//  Copyright © 2020 Xi Chen. All rights reserved.
//

#include <stdio.h>

void Transaction();
int Transactions, amount2Withdraw, amount2Deposit, pin;
double balance = 1000;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("******** Welcome to the Bank of America ********\n");
    printf("Please Enter your pin Number:\n");
    while (1) {
        scanf("%d", &pin);
        if (pin != 1234){
            printf("Sorry your pin is wrong, pls try again with another time\n");
        } else{
            Transaction();
            break;
        }
    }
    return 0;
}

void Transaction(){
    int choice;
    printf("Enter any option to be served! \n\n");
    printf("1. Balance Enquiry\n");
    printf("2. Cash Withdraw\n");
    printf("3. Deposit Cash\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("Your bank balance is: %f\n\n", balance);
            printf("Do you want to perform another transation?\n press 1 to preceed and 2 to exit\n\n");
            scanf("%d", &Transactions);
            if (Transactions == 1){
                Transaction();
            }
            break;
        case 2:
            printf("Please enter amount to withdraw: ");
            scanf("%d", &amount2Withdraw);
            if (amount2Withdraw <= balance){
                printf("Pls collect your case\n");
                balance = balance - amount2Withdraw;
                printf("Your available balance is %lf\n", balance);
                printf("\n\n Do you want to perform another tansaction? 1 to process 2 for exit\n");
                scanf("%d", &Transactions);
                if (Transactions == 1){
                    Transaction();
                }
            }else {
                printf("sorry, insufficient funds \n");
                printf("do you want to another try?  press 1 to process 2 to end \n");
                scanf("%d", &Transactions);
                if (Transactions == 1){
                    Transaction();
                }
                break;
        case 3:
                printf("Please enter amount to deposit: ");
                scanf("%d", &amount2Deposit);
                balance = amount2Deposit + balance;
                printf("Thank you for depositing, your new balance is: %f", balance);
                printf("\n\n press 1 to continue and press 2 to exit");
                scanf("%d", &Transactions);
                if (Transactions == 1){
                    Transaction();
                }
                break;
        default:
            printf("Thanks for Using ATM service, see you soon");
        }
    }
}



