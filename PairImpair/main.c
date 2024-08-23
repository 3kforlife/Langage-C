#include <stdio.h>

int main()
{
    int a;
    printf("veuillez entrer un entier: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d est pair",a);
    else
        printf("%d est impair",a);
    return 0;
}
