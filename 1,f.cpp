#include<stdio.h>
int main()
{
int i,j,k;
	for(i=1;i<=5;i++){
		k=1;
		for(j=1;j<=5;j++){
			if(i>=6-j){
				printf("%d",k);
				k++;
				}
			else
				printf(" ");
				
				}
				k--;
				
		for(j=1;j<=5;j++){
			if(i>j){
				k--;
				printf("%d",k);
				
				}
			else
				printf(" ");
			}	
	
	printf("\n");
}
return 0;	
}

	

