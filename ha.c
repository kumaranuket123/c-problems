#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n;
printf("hello dear press 5 and enter: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j==1||j==n||i==(n+1)/2)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}

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
getch();

}
