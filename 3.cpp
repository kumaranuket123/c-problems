#include<stdio.h>
int main()
{
	printf("enter the value of n for fibonacci series =");
	int a=0,b=1,n,temp=0,i=0,arr[100],j;
	scanf("%d",&n);
	
	for(j=0;j<n;j++){
		printf("%d , ",temp);
		arr[i]=temp;
		i++;
		a=b;
		b=temp;
		temp=a+b;
		}
	
	printf("\n\nplease enter the value to check in this fibonacci serise =");
	int no,r;
	i=0;
	scanf("%d",&no);
	for(i=0;i<n;i++){
		if(arr[i]==no)
			printf("yes value is found at %dth position",i+1);
		else
			continue;
		}
	return 0;
}
