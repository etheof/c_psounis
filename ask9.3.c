#include<stdio.h>

int draw_numbers(int n);

int main(){
    int k;
    
    do {
        printf("Eisagage ari8mo apo 1-9: ");
        scanf("%d", &k);
    } while (k < 1 || k >9);
    draw_numbers(k);
    printf("\n");
}

int draw_numbers(int n){
    int k=0,i=0,j=0,l=0;
    k=n;
    

    for(i=k;i>=1;i--){
       // do{
        printf("k: %d, i: %d, j: %d\t", k,i,j);
        for(j=1;j<=i;j++)
        printf("%d",j);
        for(j=1;j<=k-i;j++)
            printf(" ");
        
        printf("||");
        
        for(j=1;j<=k-i;j++)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("%d",j);
        
        printf("\n");
        //printf("Pipes gia k: %d k pipes gia i: %d \n", k,i);
       // }while (i>0);
    }
    printf("\n");

    return 0;
}
