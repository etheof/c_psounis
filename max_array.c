#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int max_array(int *pinakas, int n);

int main()
{
    int array[N];

    init_array(array, N, 100, 1000);
    print_array(array,N);
    printf("\n");

    printf("\nO megistos arithmos einai: %d", max_array(array, N));
    printf("\n");
}

 void init_array(int *pinakas, int n, int a, int b)
 {
    int i;
    srand(time(NULL));

    for(i=0;i<n;i++)
        pinakas[i]=a+rand()%(b-a+1);
 }

 void print_array(int *pinakas, int n)
 {
    int i;

    printf("[");
    for(i=0;i<n-1;i++)
        printf("%d, ", pinakas[i]);
    printf("%d]", pinakas[n-1]);
 }

 int max_array(int *pinakas, int n)
 {
    int i, max;

    max=pinakas[0];

    for(i=0;i<n;i++)
        if(pinakas[i]>max)
            max=pinakas[i];
    return max;
 }
