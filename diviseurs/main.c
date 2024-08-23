#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entrer un entier: ");
    scanf("%d",&a);
    printf("les diviseurs de %d sont : ",a);
    printf("\n");
    int i=1;
    while(i<=a){
        if(a%i==0){
            printf("%d",i);
            printf("\n");
            i++;
        }
    }
    return 0;
}
