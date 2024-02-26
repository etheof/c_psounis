#include <stdio.h>

typedef int akeraios;

int main(){
    akeraios x,y,z;

    printf("x=%d, y=%d, z=%d\n", x,y,z);

    printf("\nDwste enan akeraio: ");
    scanf("%d", &x);
    printf("Dwste akomi enan akeraio: ");
    scanf("%d", &y);
    z = x+y;
    printf("To athroisma tous einai: %d\n", z);
}