#include <stdio.h>
#include <stdlib.h>
int cumul(n){
    int i;
    int som=0;
    for(i=1;i<=n;i++){
        som+=i;
    }
    return som;
}
int main()
{
int a;
    printf("entrer un entier: ");
    scanf("%d",&a);
    int r=cumul(a);
    printf("le cumul de ce nombre est %d",r);
    return 0;
}
