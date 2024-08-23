#include <stdio.h>
#include <math.h>
struct complexe{
    int r;
    int im;
};
int main()
{
    struct complexe z;
    printf("Partie réelle: ");
    scanf("%d",&z.r);
    printf("Partie imaginaire: ");
    scanf("%d",&z.im);
    float norme;
    norme=sqrt(z.r*z.r+z.im*z.im);
    printf("la norme de (%d + %d*i) est %f",z.r,z.im,norme);
    return 0;
}
