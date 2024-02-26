#include <stdio.h>

int main(){
    int i,sum,x;
    sum=1;

    for(i=1;i<=3;i++)
    {
        printf("\nEisagete ton %d-o arithmo: ", i);
        scanf("%d", &x);
        sum=sum*x;
    }
    printf("\n\n%d", sum);
    printf("\n");
}