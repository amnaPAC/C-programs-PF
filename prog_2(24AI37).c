// : Electricity Bill Calculator

#include<stdio.h>
#include<conio.h>
void main(){
    float units,charges;
    printf("Electricity Bill Calculator");
    printf("Electricity Units :\n=> ");
    scanf("%f",&units);
    if(units<=100){
        printf("No charges!");
    }
    else if(units>=101 && units<=200){
        charges=units*5;
        printf("Your amount is about %.2f",charges);
    }
    else if(units>=201 && units<=299){
        charges=units*8;
        printf("Your amount is about %.2f",charges);
    }
    else if(units>=300){
        charges=units*10;
        printf("Your amount is about %.2f",charges);
    }
    else{
        printf("Enter corrrect information!");
    }
getch();
}
