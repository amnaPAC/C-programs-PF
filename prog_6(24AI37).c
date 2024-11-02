// : Student Grade With Pass Fail Status:

#include<stdio.h>
#include<conio.h>
void main(){
    float PF,CF,DM,sum,average;
    printf("PF Marks:\n=> ");
    scanf("%f",&PF);
    printf("CF Marks:\n=> ");
    scanf("%f",&CF);
    printf("DM Marks:\n=> ");
    scanf("%f",&DM);
    sum=PF+CF+DM;
    average=sum/300*100;

    if(average<=49){
        printf("FAIL ,percentage:%.2f %%",average);
    }
    else if(average>=76){
        printf("A-GRADE ,percentage:%.2f %%",average);
    }
    else if(average>=50 && average<=75){
    printf("B-GRADE ,percentage:%.2f %%",average);
    }
    else{
        printf("Plz , Enter corrent information!");
    }
getch();
}
