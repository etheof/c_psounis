#include<stdio.h>

#define N 8

int main(){
    int pin[N];
    int i;

    for(i=0;i<N;i++)
        printf("\nStoixeio: %d, Diefthinsi Thesis Mnimis: %p", i, &pin[i]);
    printf("\n");
}