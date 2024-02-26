#include<stdio.h>

int isprime(int n);

int main(){
    int x,y;
    int i;

    
    do {
        printf("Eisagete tin arxi tou diastimatos: ");
        scanf("%d", &x);
    } while (x<0);
    
    do{
        printf("Eisagete to peras tou diastimatos: ");
        scanf("%d", &y);
    }while(y<0);

    for(i=x;i<=y;i++){
        if(isprime(i))
            printf("\nTo %d einai Prwtos", i);
    }
    printf("\n");
}

int isprime(int n){
    int i;
    int check;

    if (n==0||n==1)
        return 0;

    check =1;
    for(i=2;i<n-1;i++)
        if(n%i==0)
            check=0;

    return check;
}
