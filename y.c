#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n;
printf("hello, PLEASE enter odd integer: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if((i+j==n+1)||(i==j&&i<=(n+1)/2))
            printf("* ");
        else
            printf("  ");

    }
    printf("\n");
}
getch();

}
