#include <stdio.h>

int main(){
    const int hr=3600;
    const int mn=60;
    
    int hrs,mins,secs;

    printf("\nVale ton ari8mo deuteroleptwn: ");
    scanf("%d", &secs);

    hrs = secs / hr;
    printf("\nWres: %d", hrs);

    secs = secs - hrs * hr;

    mins = secs / mn;
    if (mins>0)
        printf("\nLepta: %d", mins);

    secs = secs - mins * mn;
    if (secs>0)
        printf("\nDeyterolepta: %d", secs);
    printf("\n");
}