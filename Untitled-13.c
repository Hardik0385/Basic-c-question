#include<stdio.h>
void main(){
    printf("Enter the number:");
    int num1;
    scanf("%d",&num1);
    int sum=0;
    while(num1>0){
        sum=sum+(num1%10);
        num1=num1-(num1%10);
        num1=num1/10;
    }
    printf("The sum=%d",sum);
}
