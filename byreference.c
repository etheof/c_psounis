#include<stdio.h>

void swap(int* ptrA, int* ptrB);

int main(){
    int a=5,b=10;
    printf("\nMain: a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nMain: a=%d,b=%d",a,b);
    printf("\n");
}

void swap(int* ptrA, int* ptrB){
    int k;
    k=*ptrA;
    *ptrA=*ptrB;
    *ptrB=k;
    printf("\nSwap: a=%d,b=%d",*ptrA,*ptrB);
}