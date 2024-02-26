#include <stdio.h>

#define SIZE 10

int main(){
    int table[SIZE];
    int i, sum;
    sum=0;

    for(i=0;i<SIZE;i++)
    {
        printf("\nEisagete ton %d-o arithmo: ", i+1);
        scanf("%d", &table[i]);
        sum=sum+table[i];
    }
    printf("\n\nTo a8roisma tous einai: %d", sum);
    printf("\n");
}
