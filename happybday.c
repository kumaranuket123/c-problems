#include<stdio.h>
main(){
int i,j,n;
printf("hello dear press 7 and enter: ");
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
printf("\n");
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
printf("\n");
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
printf("\n");
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
printf("\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if((i+j==n+1)||(i==j&&i<=(n+1)/2))
            printf("* ");
        else
            printf("  ");

    }
    printf("\n");
}
printf("\n");
printf("birthday short me likha kyuki bnane ka time nhi mila\n");

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==1&&j==n)
            printf("  ");
        else if(i==n&&j==n) printf("  ");
        else if(i==(n+1)/2&&j==n) printf("  ");
        else if(i==1||j==1||i==n||j==n)
            printf("* ");
        else if(i==(n+1)/2) printf("* ");
        else printf("  ");

    }
    printf("\n");
}
printf("\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==1&&j==n)
            printf("  ");
        else if(i==n&&j==n) printf("  ");
        else if(i==1||i==n||j==1||j==n)
            printf("* ");
        else printf("  ");

    }
    printf("\n");
}
printf("\n");
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
printf("\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if((i+j==n+1)||(i==j&&i<=(n+1)/2))
            printf("* ");
        else
            printf("  ");

    }
    printf("\n");
}

printf("BY ANUKET\n");
printf("dekh THANKYOU bolne ki jrurat nhi hai, main to basss revision kr rha tha.\n aaj ka pura din isi me chala gya\n or isi ke chalte late ho gya thora hahahah, emoji insert krna aata nhi isiliye nhi dal paya");
printf("\nBE HAPPY EVERYDAY");
printf("\n ab bass itni mehnat kiya to party to dena padega: kvi v dedena tension mt le");


return 0;

}
