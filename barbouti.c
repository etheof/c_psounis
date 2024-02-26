#include <stdio.h>

#define SIZE 4

int main(){
    int dice[SIZE];
    
    printf("Esfalmeno Barbouti!");
    printf("\nPrwtos paixtis, ti efere to zari 1? ");
    scanf("%d", &dice[0]);
    printf("\nPrwtos paixtis, ti efere to zari 2? ");
    scanf("%d", &dice[1]);
    printf("\nDeuteros paixtis, ti efere to zari 1? ");
    scanf("%d", &dice[2]);
    printf("\nDeuteros paixtis, ti efere to zari 2? ");
    scanf("%d", &dice[3]);

    int sum1 = dice[0] + dice[1];
    int sum2 = dice[2] + dice[3];

    printf("\nApotelesma agwna:");
    if (sum1==sum2)
        printf("\nI S O P A L I A !!! %d - %d", sum1, sum2);
    else if (sum1>sum2)
        printf("\nNikhse o prwtos paixtis me: %d - %d", sum1, sum2);
    else
        printf("\nNikhse o deuteros paixtis me: %d - %d", sum2, sum1);
    printf("\n");
}