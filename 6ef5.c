#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mkd(int a, int b);

int main(){
    int a,b;
    srand(time(NULL));

    printf("Dwse ton 1o arithmo: ");
    a=rand()%100;
    //scanf("%d", &a);
    printf("Dwse ton 2o arithmo: ");
    b=10+rand()%91;
    //scanf("%d", &b);

    printf("\nO MKD twn dyo arithmwn %d k %d einai o %d", a,b,mkd(a,b));
    printf("\n");

}

int mkd(int a, int b){
    printf("\n%d \t %d", a ,b);
    if (a==b)
        return a;
    else if (a<b)
        return mkd(a,b-a);
    else    
        return mkd(a-b,b);

}