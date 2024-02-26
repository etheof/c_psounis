#include <stdio.h>

#define SIZE 5

int main(){
    int table[SIZE];
    int i, prod;
    prod=1;

    for(i=0;i<SIZE;i++)
    {
        do
        {
        printf("Eisagete ton %d-o arithmo (mono metaxy 1 - 8): ", i+1);
        scanf("%d", &table[i]);
        } while (table[i] < 1 || table[i] > 8);   
        prod=prod*table[i];
    }
    printf("\n\nTo ginomeno tous einai: %d", prod);
    printf("\n\n");
}
