#include <stdio.h>

int main(){
    int x,y;

    x=1;
    y = x++;
    printf("To x einai %d enw to y einai %d", x,y);

    x=1;
    y = ++x;
    printf("\nTo x einai %d enw to y einai %d\n", x,y);
   
    printf("\n Monadiaioi");
    int a=1;
    int b=1; 

    printf("\n%d, %d", a++, ++b);
    printf("\n%d, %d", a++, ++b);
    printf("\n%d, %d", a++, ++b);
    printf("\n%d, %d\n", a, b);
}