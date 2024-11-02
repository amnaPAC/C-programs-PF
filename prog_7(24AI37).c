// : Online Shopping Discount System :

# include<stdio.h>
# include<conio.h>
void main(){
    int purchase_amount,member;
    float final_amount;
    printf("Enter your total amount");
    scanf("%d",&purchase_amount);
    if(purchase_amount>2000){
        printf("Are you member(yes=1/no=0):\n=> ");
        scanf("%d",&member);
        if(member==1){
            final_amount=purchase_amount*0.20;
            printf("Your final amount is:%.2f",final_amount);
        }
        else{
            final_amount=purchase_amount*0.10;
            printf("Your final amount is:%.2f",final_amount);
        }
    }
    else{
        printf("No discount!");
    }
getch();
}