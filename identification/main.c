#include <stdio.h>

void identification(){
    char nom[20];
    char prenom[100];
    int age;
    printf("NOM : ");
    gets(&nom)
    printf("PRENOM : ");
    gets(&prenom)
    printf("AGE : ");
    scanf("%d",&age);
    printf("je m'appelle %s %s et j'ai %d",nom,prenom,age);

}

int main()
{
    identification();
    return 0;
}
