#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
    int i,t;
    float j;
    int tab[n];
    printf("votre tableau contient combien d'éléments(au plus 100): ");
    scanf("%d",&t);
    for(i=0;i<t;i++){
        printf("entrer l'élément n¤ %d: ",i+1);
        scanf("%f",&j);
        tab[i]=j;
    }
    int max=0;
    int min;
    for(int k=0;k<t;t++){
        if(tab[k]>=max){
            max=tab[k];
            min=tab[k+1];
            printf("%d",min);
            printf("%d",max);
        }
    }
    return 0;
}
