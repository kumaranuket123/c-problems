#include<stdio.h>
int diagonalsum(int a[])
{
    int n=0,k=1;

    printf("PLEAS ENTER THE SIZE OF AN ARRAY ");
    scanf("%d",&n);
    printf("SIZE OF ARRAAY MATRIX IS   %d*%d \n\n",n,n);

    int b[n][n],sum=0,su=0;


    for(int i=0;i<n;i++)
    {
        printf("PLEASE ENTER THE VALUE IN ARRAY \n");
            for(int j=0;j<n;j++)
            {

                scanf("%d",&b[i][j]);
            }

    }
    printf("VALUE IN ARRAY IS \n");
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {

                printf("%d  ",b[i][j]);
            }
        printf("\n");
    }
for(int i=0;i<n;i++)
    {
                for(int j=0;j<n;j++)
                {
                        if(i==j)
                        {
                        sum=sum+b[i][j];
                        }

                            else
                            {

                            }
                }

    }
    printf("SUM OF FIRST RAW =%d \n",sum);
    k=n-1;
    sum=0;
    for(int i=0;i<n;i++)
    {
         printf("I=%d\n",i);
        for(int j=k;j>=0;j--)
        {
            printf("J=%d\n",k);
            printf("G=%d\n",b[i][j]);

            sum=sum+b[i][j];

            goto nextloop;
        }

        nextloop:
        k=--k;
    }

    printf("SUM OF SECOND RAW =%d \n",sum);

     return sum;


}
int main()
{
    int a[0][0];

    diagonalsum(a[][]);
    return 0;

}
