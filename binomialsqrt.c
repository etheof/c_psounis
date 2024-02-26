#include<stdio.h>
#include<math.h>

int rizes(float a, float b, float c, float *x1, float *x2);

int main()
{
    float a,b,c,riza1,riza2;
    int plithos;

    /*1. Diavasma eisodou apo plikotrologio*/
    printf("\nDwse to a: ");
    scanf("%f", &a);

    printf("\nDwse to b: ");
    scanf("%f", &b);

    printf("\nDwse to c: ");
    scanf("%f", &c);

    /*2. Ypologismos rizwn*/
    plithos=rizes(a,b,c, &riza1, &riza2);

    /*3. Ektypwsh apotelesmatos*/
    if (plithos==0)
        printf("\n Den exei pragmatikes rizes");
    else if (plithos==1)
        printf("\n Exei dipla riza tin %f ", riza1);
    else
        printf("\n Exei rizes tis %f kai %f ", riza1, riza2);
    printf("\n");
}

int rizes(float a, float b, float c, float *x1, float *x2){
    float D;

    D=b*b-4*a*c;

    if(D<0)
        return 0;
    else if (D==0)
    {
        *x1 = -b/(2*a);
        return 1;
    }
    else
    {
        *x1 = (-b+sqrt(D)/2*a);
        *x2 = (-b-sqrt(D)/2*a);
        return 2;
    }
}