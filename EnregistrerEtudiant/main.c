#include <stdio.h>
#include <stdlib.h>
struct Etudiant{
    char nom[20];
    char prenom[100];
    int age;
};
int main()
{
    struct Etudiant e;
    printf("NOM : ");
    gets(&e.nom);
    printf("PRENOM : ");
    gets(&e.prenom);
    printf("AGE : ");
    scanf("%d",&e.age);
    printf("NOM : ");
    puts(e.nom);
    printf("PRENOM : ");
    puts(e.prenom);
    printf("AGE : %d",e.age);
    return 0;
}
