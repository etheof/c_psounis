#include <stdio.h>

#define N 100

int main(){
    int i,sum;
    const int number = 10;

    sum=0;
    for (i=number; i<=N; i++)
        sum=sum+i;

    printf("To atrhoisma twn arithmwn [%d..%d] einai %d\n", number,N,sum);
}