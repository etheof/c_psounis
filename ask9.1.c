#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printGd();
void eisagogi_pinaka();

int main()
{
    //int array[SIZE];
    int choice=1;
    int number,a,b;
    float fNum;

    while(choice!=5)
    {
        printf("\a\n-------------");
        printf("\nMenu Epilogwn");
        printf("\n-------------");
        printf("\n1-Vres to tetragwno ari8mou");
        printf("\n2-Pes kalimeres polles");
        printf("\n3-Vres to tetarto ari8mou");
        printf("\n4-Vres meso oro pinaka 5*1");
        printf("\n5-Eksodos");
        printf("\nEpilogi? ");
        scanf("%d", &choice);

        if(choice==1)
        {
            printf("\nDwse enan akeraio ari8mo: ");
            scanf("%d", &number);
            printf("\nTo tetragwno tou einai: %d!", number*number);
            printf("\n");
        }
        else if(choice==2)
        {
            printGd();
            printf("\n");
        }
        else if(choice==3)
        {
            printf("\nDwse enan pragmatiko ari8mo: :\n");
            scanf("%f", &fNum);
            printf("\nTo en tetarto tou einai: %.4f ", fNum/4);
        }
        else if(choice==4)
        {   
            eisagogi_pinaka();
            printf("\n");

        }
        else if(choice==5)
        {
            printf("\nBye.");
        }
    }
    printf("\n");
}

 void printGd(){
    int N, i;

    printf("\nDwse tis N fores: ");
    scanf("%d", &N);

    for(i=0;i<N;i++)
        printf("\nKalhmera!!!");
 }

 void eisagogi_pinaka()
 {
    double pinakas[5];
    int i;
    double sum, mo;

    for(i=0;i<5;i++){
        printf("\nDwse ton %d-o pragmatiko arithmo: ", i+1);
        scanf("%lf", &pinakas[i]);
    }

    sum=0.0;
    for(i=0;i<5;i++)
        sum+=pinakas[i];
    mo = sum/5;
    printf("\nO mesos oros einai: %.3f", mo);
    printf("\n");
 }