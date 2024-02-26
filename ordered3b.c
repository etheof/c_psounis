#include <stdio.h>

int main(){
    int a,b,c;
    int min = 0, mid =0 , max =0;

    printf("\nMin: %d", min);
    printf("\nMid: %d", mid);
    printf("\nMax: %d", max);
    
    printf("\nDwse 1o ari8mo: ");
    scanf("%d", &a);
    min = a;

    printf("\nMin: %d", min);
    printf("\nMid: %d", mid);
    printf("\nMax: %d", max);

    printf("\nDwse 2o ari8mo: ");
    scanf("%d", &b);

    if (b < min){
        min = b;
        mid = a;
        }
    else
        mid =b;
    

    printf("\nMin: %d", min);
    printf("\nMid: %d", mid);
    printf("\nMax: %d", max);

    printf("\nDwse 3o ari8mo: ");
    scanf("%d", &c);
    
    if (c < min)
        min = c;
        if (a<b){
            mid = a;
            max = b;
        }
    else if (c>mid)
        max = c;
        if (a<b)
            min = a;
            mid = b;

    printf("\nMin: %d", min);
    printf("\nMid: %d", mid);
    printf("\nMax: %d", max);

    printf("\n H diataksi einai: %d, %d, %d", min,mid,max);
    printf("\n");
}