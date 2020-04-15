#include<stdio.h>
#include<conio.h>
int main()
{
	//print the the given serise
	printf("the given serise is :\n");
	int n,i;
	int j=1,k=1;

	printf("\nenter the number of terms :");
	scanf("%d",&n);
	printf("\nfor even serise :");
	
	for(i=1;i<=n;i++){
		printf("%d,%d,",j,j);
		j=(j*2);
	}
	
	printf("\nfor odd serise :");
	
	for(i=1;i<=n;i++){
			
		printf("%d,%d,",k,k);
	k=(k*2+1);
	}
	return(0);
	
}
