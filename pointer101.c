#include<stdio.h>
#include<stdlib.h>

int main () {
    int x;
    int* ptr;

    ptr=&x;
    x=5;

    printf("\nx=%d\t *ptr=%d\t &x=%p\t ptr=%p", x, *ptr, &x, ptr);
    *ptr=8;
    printf("\nx=%d\t *ptr=%d\t &x=%p\t ptr=%p", x, *ptr, &x, ptr);
    x=9;
    printf("\nx=%d\t *ptr=%d\t &x=%p\t ptr=%p", x, *ptr, &x, ptr);
    printf("\n");
}