// : Loan Approval System :

#include<stdio.h>
#include<conio.h>
void main(){
    int m_income,option;
    printf("\tPerson eligibility for a loan:\n\n=> ");
    printf("Enteer your monthly income:");
    scanf("%d",&m_income);
    if(m_income>=30000){
        printf("Do you have an existing loan(Yes = 1 , No = 0):\n=> ");
        scanf("%d",&option);
        if(option==1){
            printf("You should not have any overdue payments");
        }
        else{
            printf("Eligible for loan!");
        }
    }
    else{
        printf("Ineligible");
    }
getch();
}
