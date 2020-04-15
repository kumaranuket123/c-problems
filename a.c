#include<stdio.h>
int main()
{
int i,j,n;
printf("hello, PLEASE enter odd integer: ");
scanf("%d",&n);
for(i=n;i>=1;i--){
    for(j=1;j<i;j++)
        printf(" ");
    for(j=0;j<=n-i;j++){
        if(j==0||j==n-i||i==(n+1)/2)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}
return 0;
}
