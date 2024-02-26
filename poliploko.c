#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int max_array(int *pinakas, int n);

int main()
{
    int array[SIZE];
    int choice=1;
    int N,a,b;

    while(choice!=5)
    {
        printf("\n-------------");
        printf("\nMenu Epilogwn");
        printf("\n-------------");
        printf("\n1-Eisagwgi tou mege8ous tou pinaka");
        printf("\n2-Arxikopoihsh pinaka");
        printf("\n3-Ypologismos tou megistou");
        printf("\n4-Ektipwsh tou pinaka");
        printf("\n5-Eksodos");
        printf("\nEpilogi? ");
        scanf("%d", &choice);

        if(choice==1)
        {
            printf("\nDwse to megethos tou pinaka: ");
            scanf("%d", &N);
            printf("\nFxarsto!\n");
        }
        else if(choice==2)
        {
            printf("\nDwse tin arxi tou diasthmatos twn tyxaiwn arithmwn: ");
            scanf("%d", &a);
            printf("\nDwse to peras tou diasthmatos twn tyxaiwn arithmwn: ");
            scanf("%d", &b);
            init_array(array, N, a, b);
            printf("\nEgine h arxikopoihsh tou pinaka!\n");
        }
        else if(choice==3)
        {
            printf("\nO megistos arithmos einai: %d\n", max_array(array, N));
        }
        else if(choice==4)
        {
            printf("\n\nIdou o pinakas sas:\n");
            print_array(array, N);
            printf("\n");
        }
        else if(choice==5)
        {
            printf("\nBye.");
        }
    }
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
