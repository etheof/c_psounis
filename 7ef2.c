#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define M 5
#define N 8

int main(){
    int i,j;
    int pinakas[M][N];

    srand(time(NULL));

    for (i=0;i<M;i++)
        for (j=0;j<N;j++)
            pinakas[i][j]=rand()%201;

    for (i=0;i<M;i++){
        for (j=0;j<N-1;j++)
            printf("%d\t", pinakas[i][j]);
            printf("%d", pinakas[i][N-1]);
            printf("\n");
    }

    printf("\n");
}