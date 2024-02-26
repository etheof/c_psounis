#include<stdio.h>

void swap(int a, int b);

int main(){
    int a=5,b=10;
    printf("\nMain: a=%d,b=%d",a,b);
    swap(a,b);
    printf("\nMain: a=%d,b=%d",a,b);
    printf("\n");
}

void swap(int a, int b){
    int k;
    k=a;
    a=b;
    b=k;
    printf("\nSwap: a=%d,b=%d",a,b);
}