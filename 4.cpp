#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two values for swaping\n");
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	int *p,*q;
	p=&b;
	q=&a;
	printf("swaped number are \na= %d\nb= %d",*p,*q);
	
	return 0;
}
