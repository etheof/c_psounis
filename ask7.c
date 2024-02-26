#include <stdio.h>

#define SIZE 20

int main(){
    int table[SIZE];
    int i,j;
    int min, max;
    
    printf("\nWelcome Houman!\n");
    do
    {
    printf("Eisage ena arithmo (mono metaxy 1 - 20): ");
    scanf("%d", &i);
    } while (i < 1 || i > 20);   
    
    printf("\n");
    for(j=0;j<SIZE;j++)
    {
        table[j] = 0;
    }

    for(j=0;j<i;j++)
    {
        printf("Eisagete ton %d-o arithmo: ", j+1);
        scanf("%d", &table[j]);
    }
    
    min = table[0];
    for(j=1;j<i;j++)
    {
        if (table[j] < min)
        min = table[j];
    }


    max = table[0];
    for(j=1;j<i;j++)
    {
        if (table[j] > max)
        max = table[j];
    }

    printf("\nO mikroteros ari8mos htan o: %d", min);
    printf("\nO megaliteros ari8mos htan o: %d", max);
    printf("\n\n");
}
