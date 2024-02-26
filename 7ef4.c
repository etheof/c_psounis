#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a,Hidden;
    srand(time(NULL));

    Hidden=1+rand()%100;

    printf("Dwse enan arithmo metaxy 1-100: ");
    do{
    scanf("%d", &a);
    if (a<Hidden)
        printf("\nPigaine parapan: ");
    else if (a>Hidden)
        printf("\nPigaine parakat: ");
    else
        printf("\n\nSuccess\n");
    } while (a!=Hidden);
    
    printf("\n%d itan o krimenos arithmos", Hidden);
    printf("\n");

}
