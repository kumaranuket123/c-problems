#include<stdio.h>
int main()
{
	printf("for sum of 1st n odd number, enter the value of n =");
	int n,i,sum=0,k=1;
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		
		printf("%d +",k);
		sum=sum+k;
		k=k+2;	
	}
	printf(" =%d",sum);
	return 0;
}
