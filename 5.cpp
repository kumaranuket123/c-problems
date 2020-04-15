#include<stdio.h>
int main()
{
	int arr[10],i,j,lar;
	printf("enter any 10 unique values for finding the largest one");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("entered number are:");
	for(i=0;i<10;i++)
		printf("%d, ",arr[i]);
		
	lar=arr[0];
	for(i=0;i<10;i++){
		if(lar<arr[i])
			lar=arr[i];
		else
			continue;
	}
	
	printf("\n%d is a largest among them",lar);
		
}
