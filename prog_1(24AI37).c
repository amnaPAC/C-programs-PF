// : Admission Eligibility Checker

#include<stdio.h>
#include<conio.h>
void main(){
    float maths,science,eligibility;
    printf("Enter your maths percentage:\n=> ");
    scanf("%f",&maths);
    printf("Enter your science percentage:\n=> ");
    scanf("%f",&science);
    eligibility=maths+science;
    if(eligibility>=50){
        printf("You are eligible for admission!\n");
        if(eligibility>=80){
            printf("You are eligible for scholarship!");
        }
    }
    else{
        printf("You are not eligible!");
    }
getch();
}