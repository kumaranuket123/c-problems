#include<stdio.h>
int main(){
	int n;
	printf("enter number of terms:");
	scanf("%d",&n);
	int a[100],i,j,k=1,fact;
//for storing prime no.in array at even place
	for(i=1; i<=n*2; i++)
    {
        fact=0;
        for(j=1; j<=n*2; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2){
		    a[k]=i;
            k=k+2;
        }
    }
//for storing fibonacci series in array at odd place
	int t1=1,t2=1,temp,l=0;
    for (i=1;i<=n*2;i++) {
        a[l]=t1;
        temp =t1 + t2;
        t1=t2;
        t2=temp;
        l=l+2;
    }
    
    printf("the series will be:\n");
    for(i=0;i<=n;i++){
    	printf("%d,",a[i]);
	}
}
