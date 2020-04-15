#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n;
printf("hello, PLEASE enter odd integer: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=(n+1)/2;j++){
        if(i==1||j==1||i==(n+1)/2)
            printf("* ");
        else if(i<=(n+1)/2&&j==(n+1)/2)
            printf("* ");
        else
            printf("  ");

    }
    printf("\n");
}
getch();

}
