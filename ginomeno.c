#include <stdio.h>

int a, b, c;

int ginomeno (int x, int y);

void main(){
    printf("Eisagete arithmo metaksi 1 k 100:");
    scanf("%d", &a);

    printf("Eisagete allo arithmo metaksi 1 k 100:");
    scanf("%d", &b);

    c=ginomeno(a, b);
    printf("To ginomeno tou %d kai tou %d einai: %d\n", a,b,c);
    //return 0;
}

int ginomeno(int x, int y){
    return (x*y);
}