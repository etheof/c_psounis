#include<stdio.h>

int main(){
    int N;
    int i,j;

    N=19;

    i=0;
    do
    {
            j=i;
            do
            {
                printf("*");
                j++;
            }
            while(j<=N);
        printf("\n");
        i++;
    }
    while(i<=N);
    //printf("\n");
}