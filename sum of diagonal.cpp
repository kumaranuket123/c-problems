#include<stdio.h>
#include<conio.h>
int main()
{
	//entering the dimentions of an array ex:3*3 which should be square
	int n;
	printf("Enter the dimention of square matrix n=");
	scanf("%d",&n);
	
	//input data in the matrix
	int a[n][n],i,j;
	printf("\nenter the data into the matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//displaying the given matrix by user
	printf("\nthe given matrix by user is\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	//sum of diagonal in the given matrix
	int d1=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				d1=d1+a[i][j];
			}
		}
	}
	
	//sum of other diagonal
	int d2=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==n-1-j)
				d2=d2+a[i][j];
		}
	}
	if(n%2==0)
	printf("\n d1=%d and d2=%d,\n sum of the diagonals of matrix is %d",d1,d2,d1+d2);
	else{
		int k=(n-1)/2;
		printf("\n d1=%d,d2=%d and middle term is %d,\n sum of the diagonals of matrix is %d",d1,d2,a[k][k],d1+d2-a[k][k]);
	}
		
	getch();
}
