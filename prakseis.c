#include <stdio.h>

int main(){
    int x,y,z;
    int telestis;

    printf("\nDwse ton 1o akeraio: ");
    scanf("%d", &x);
    printf("Dwse ton 2o akeraio: ");
    scanf("%d", &y); 
    printf("\nDwse ton telesti\n 0 gia +\n 1 gia -\n 2 gia *\n 3 gia /\n 4 gia %% ");
    printf("\nEpilogh? ");
    scanf("%d", &telestis);

    if(telestis==0)
    {
        z=x+y;
        printf("%d + %d = %d\n", x,y,z);
    }
    else if(telestis==1)
    {
        z=x-y;
        printf("%d - %d = %d\n", x,y,z);
    }
    else if(telestis==2)
    {
        z=x*y;
        printf("%d * %d = %d\n", x,y,z);
    }
    else if(telestis==3)
    {
        z=x/y;
        printf("%d / %d = %d\n", x,y,z);
    }
    else if(telestis==4)
    {
        z=x%y;
        printf("%d %% %d = %d\n", x,y,z);
    }
}