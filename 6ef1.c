#include <stdio.h>

int get_integer(int start, int finish);

int main(){
    int a,b,n;

    a = get_integer(1,10);
    b = get_integer(1,10);
    n = get_integer(2,5);

    printf("Apotelesma: %d", n*(a-b));
    printf("\n\n");
}

int get_integer(int start, int finish){
    int x;
    do{
    printf("Dwse mia timi apo %d eos %d: ", start, finish);
    scanf("%d", &x);
    } while (x < start || x > finish);
   return x;
}
