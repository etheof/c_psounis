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
    if (b>a && b>c) {
        if (a>c)
            printf("\n H diataksi einai: %d, %d, %d", c,a,b);
        else 
            printf("\n H diataksi einai: %d, %d, %d", a,c,b);
        }
    else if (c>a && c>b) {
        if (a>b)
            printf("\n H diataksi einai: %d, %d, %d", b,a,c);    
        else
            printf("\n H diataksi einai: %d, %d, %d", a,b,c);
        }
    else if (a>b && a>c) {
        if (b>c)
            printf("\n H diataksi einai: %d, %d, %d", c,b,a);    
        else
            printf("\n H diataksi einai: %d, %d, %d", b,c,a);
        }
    printf("\n");
}