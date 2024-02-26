#include <stdio.h>

int main(){
    int a;

    const int m =18;
    const int r =65;

    printf("Vale tin ilikia sou se parakalw: ");
    scanf("%d", &a);

    //printf("%d", x<y?0:1);

    printf("\nAniliko!  %d", a<m?1:0);
    printf("\nEnilikas! %d", a>=m && a<=r?1:0);
    printf("\nGeros!    %d", a>r?1:0);
    printf("\n");

    printf("\nMou les dld oti eisai: ");
    if (a<m)
        printf("\nAniliko!");
    else if (a>r)
        printf("\nGeros!");
    else
        printf("\nEnilikas!");
    printf("\n");
}
