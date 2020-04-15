#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("enter the number for printing the pattern:");
	scanf("%d",&n);
	mid=(n+1)/2;
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++){
			if(j==1 || j==i || i==mid){
				printf("* ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}


