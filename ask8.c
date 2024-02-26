#include <stdio.h>

#define SIZE 20

int main(){
    int table[SIZE];
    int i,j;
    int sum;
    float mean;
    
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
    
    sum = 0;
    for(j=0;j<i;j++)
        sum += table[j];
    
    mean = sum / (float)i;

    printf("\nO mesos oros einai: %f", mean);
    printf("\n\n");
}
