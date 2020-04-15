#include<stdio.h>
int main()
{
	printf("enter the value for check the number EVEN or ODD= ");
	int n;
	scanf("%d",&n);
	if(n%2==0)
		printf("Given number is even");
	else
		printf("Given number is odd");
	return 0;
}
