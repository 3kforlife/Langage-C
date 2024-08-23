#include <stdio.h>
#include <stdlib.h>
int factoriel(n){
    int i;
    int fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main()
{
    int a;
    printf("entrer un entier: ");
    scanf("%d",&a);
    int r=factoriel(a);
    printf("le factoriel de ce nombre est %d",r);
    return 0;
}
