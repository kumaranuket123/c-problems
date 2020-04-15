#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n;
printf("hello, PLEASE enter odd integer: ");
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
getch();

}
