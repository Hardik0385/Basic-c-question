#include <stdio.h>
int main(){
    int a=5,b=10,pid;
    printf("Before fork: %d %d\n",a,b);
    pid=fork();
    if(pid==0){
        a=a+1;
        b=b+1;
        printf("value of child: %d %d\n",a,b);
    }
    else{
        sleep(1);
        a=a-1;
        b=b-1;
        printf("value of child: %d %d\n",a,b);
    }
}