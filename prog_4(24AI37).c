// : Income Tax Calculator

#include<stdio.h>
#include<conio.h>
void main(){
    int income,income_tax;
    printf("Enter your income:\n=> ");
    scanf("%d",&income);
    if(income<=250000){
        printf("No tex!");
    }
    else if(income>=250001 && income>=500000){
        income_tax=income*0.05;
        printf("Your amount after income tax is about:%d",income_tax);
    }
    else if(income>=500001 && income>=1000000){
        income_tax=income*0.10;
        printf("Your amount after income tax is about:%d",income_tax);
    }
    else if(income>1000000){
        income_tax=income*0.15;
        printf("Your amount after income tax is about:%d",income_tax);
    }
getch();
}