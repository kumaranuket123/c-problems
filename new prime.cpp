#include<stdio.h>
int main()
{
	int i,j,fact,n,term=0;
	printf("enter the nth term for displying prime number:");
	scanf("%d",&n);
	
	for(i=1;i<=100;i++){
		fact=0;
		for(j=1;j<=i;j++){
			if(i%j==0)
				fact++;
		}
		if(fact==2){
			term++;
			if(term==n){
				printf("your %dth prime number is %d",n,i);
				break;
			}
		}		
	}
	return(i);
}
