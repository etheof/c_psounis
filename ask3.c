#include<stdio.h>

int main(){
    int M,N;
    int i,j;

    M=10;
    N=20;

    for(i=0;i<=M;i++)
    {
        for(j=0;j<=N;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    i=0;
    while(i<=M)
    {
        j=0;
        while(j<=N)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}