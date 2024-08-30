#include <stdio.h>
#include <string.h>
void main(){
    char a[100];
    printf("Enter the string:");
    scanf("%s",&a);
    char b[];
    b=strrev(a);
    int c=strcmp(a,b);
    if(c==0){
        printf("The string is palindrome!");
    }
    else{
        printf("The string is not palindrome!!")
    }
}