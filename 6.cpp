#include<stdio.h>
int main()
{
	printf("for sum of n natural number, enter the value of n =");
	int n,i,sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		sum=sum+i;
		
	for(i=1;i<=n;i++)
		printf("%d+",i);
		
	printf("=%d",sum);
	return 0;
	
}
