// : Blood Donation Eligibility

#include<stdio.h>
#include<conio.h>
void main(){
    int age,weight;
    printf("Enter your age:\n=> ");
    scanf("%d",&age);
    printf("Ente your weight:\n=> ");
    scanf("%d",&weight);
    if(age>=18 && age<=65){
        if(weight<=50){
            printf("You are eligible to donate blood!");
        }
        else{
            printf("You are not eligible due to your weight!");
        }
    }
    else{
        printf("You are not eligible due to your age!");
    }
getch();
}