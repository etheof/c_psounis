#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE1 100
#define SIZE2 200

int main(){
    int i,j;
    int M,N;
    int pinakas[SIZE1][SIZE2];

    srand(time(NULL));

    printf("Epelekse plithos Grammwn tou Pinaka!");
    do{
    printf("\nMONO METAXY 10 - 100: ");
    scanf("%d", &M);
    } while (M<10 || M >100);
    //printf("\nEpelekses %d: ", M);
    printf("\n");

    printf("Epelekse plithos Stilwn tou Pinaka!");
    do{
    printf("\nMONO METAXY 20 - 200: ");
    scanf("%d", &N);
    } while (N<20 || N >200);
    //printf("\nEpelekses %d: ", N);
    printf("\n");

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