// : Bank ATM Withdrawal Eligibility

#include<stdio.h>
#include<conio.h>
void main(){
    int total_amount,withdraw_amount,withdrawal_permit;
    printf("Enter your total amount:\n=> ");
    scanf("%d",&total_amount);
    printf("Enter amount you want to wihdraw:\n=> ");
    scanf("%d",&withdraw_amount);
    if(withdraw_amount<=total_amount){
        if(withdraw_amount>=10000){
            printf("Do you have a special withdrawal permit (Yes = 1 / No = 0)?\n=> ");
            scanf("%d",&withdrawal_permit);
            if(withdrawal_permit == 1){
                printf("%d withdraw sucssesfully",withdraw_amount);
            }
            else{
                printf("withdraw permit not granted");
            }
        }
        else{
            printf("%d Sucssesfully Withdraw",withdraw_amount);
        }
    }
    else{
        printf("You have no enough money");
    }
getch();
}