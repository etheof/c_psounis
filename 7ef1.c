#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100

int main(){
    int pinakas[SIZE];
    int i, N;
    
    printf("Epelekse plithos stoixeiwn tou Pinaka!");
    do{
    printf("\nMONO METAXY 20 - 100: ");
    scanf("%d", &N);
    } while (N<20 || N >100);
    printf("\nEpelekses %d: ", N);
    printf("\n");

    srand(time(NULL));
    for (i=0;i<N;i++){
        pinakas[i]=rand()%1000;
        //printf("%d ", pinakas[i]);
    }

    printf("[");
    for (i=1;i<N-1;i++)
        printf("%d, ", pinakas[i]);
    printf("%d]", pinakas[N-1]);

    printf("\n");
}