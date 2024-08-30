#include<stdio.h>
struct node
{
	int data;
	struct node *link;
}a,b;
int main()
{
	a.data=5;
	a.link=NULL;
	b.data=6;
	b.link=NULL;
	a.link=&b;
	printf("a=%d\n",a.data);
	printf("b=%d\n",a.link->data);
	printf("link part of a=%x\n",a.link);
	printf("link part of b=%x\n",b.link);
return 0;		
}