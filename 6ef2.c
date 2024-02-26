#include <stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

int main(){
    int x=0;

    printf("Gia vale ena Noumero, noumero: ");
    scanf("%d", &x);

    if (is_even(x))
        printf("\nEinai Artios");
    if (is_odd(x))
        printf("\nEinai Perittos");
    if (is_square(x))
        printf("\nEinai Tetragono Arithmou");
    if (is_cube(x))
        printf("\nEinai Kivos Arithmou");
    printf("\n\n");
}

int is_even(int n){
    if(n%2==0){
        return 1;
    }
    else
        return 0;
}
int is_odd(int n){
    if(n%2!=0){
        return 1;
    }
    else
        return 0;
}
int is_square(int n){
    int i;
    for(i=1; i<=n; i++){
        if(i*i==n){
            return 1;
        }
        else if (i*i>n)
            return 0;
    }
    return 0;
}
int is_cube(int n){
    int i;
    for(i=1; i<=n; i++){
        if(i*i*i==n){
            return 1;
        }
        else if (i*i*i>n)
            return 0;
    }
    return 0;
}