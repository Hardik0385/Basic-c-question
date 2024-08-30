#include <stdio.h>
int main(){
    int a=9;
    int *p;
    int **dp;
    p=&a;
    dp=&p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",**dp);
    printf("%x\n",p);
    printf("%x\n",dp);
}