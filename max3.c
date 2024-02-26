#include <stdio.h>

int main(){
    int a,b,c;

    printf("Dwse 1o ari8mo: ");
    scanf("%d", &a);

    printf("\nDwse 2o ari8mo: ");
    scanf("%d", &b);

    printf("\nDwse 3o ari8mo: ");
    scanf("%d", &c);
    
    printf("\nbleep bleep bleep: ");
    if (b>a && b>c)
        printf("\n O deuteros einai pio megalos! Dld o : %d", b);
    else if (c>a && c>b)
        printf("\n O tritos einai pio megalos! Dld o : %d", c);    
    else
        printf("\n O prwtos einai pio megalos! Dld o : %d", a);
    printf("\n");
}