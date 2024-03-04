#include<stdio.h>

int main(){
    int k,i,j;
    k=5;

    for(i=1;i<=k;i++){
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=k-i;j++)
            printf(" ");
        
        for(j=1;j<=k-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}