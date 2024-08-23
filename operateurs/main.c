#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("A : ");
    scanf("%f",&a);
    printf("B : ");
    scanf("%f",&b);
    printf("-------------LES OPERATEURS----------------");
    printf("\n 1-(+)\n 2-(-)\n 3-(*) \n 4-(/)\n 5-QUITTER");
    int choix;
    printf("veuillez entrer votre choix: ");
    scanf("%d",&choix);
    switch(choix){
        case 1:printf("A + B = %f",a+b);
        break;
        case 2:printf("A - B = %f",a-b);
        break;
        case 3:printf("A * B = %f",a*b);
        break;
        case 4:printf("A / B = %f",a/b);
        break;

    }
    return 0;
}
