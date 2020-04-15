#include<stdio.h>
int main()
{
	printf("enter the value of n for fibonacci series =");
	int a=0,b=1,n,temp=0;
	scanf("%d",&n);
	
	while(temp<=n){
		printf("%d , ",temp);
		a=b;
		b=temp;
		temp=a+b;
		
		
	}
	return 0;
}
