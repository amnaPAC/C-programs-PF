// : Health Insurance Eligibility :

#include<stdio.h>
#include<conio.h>
void main(){
    int age,question;
    printf("AGE :");
    scanf("%d",&age);
    if(age>=45){
        printf("Do you have any serious illness (Yes = 1 / No = 0):\n=> ");
        scanf("%d",&question);
        if(question==1){
            printf("You are not eligible for health insurance!");
        }
        else{
            printf("You are eligible for health insurance:");
        }
    }
    else{
        printf("You are eligible for health insurance:");
    }
getch();
}
