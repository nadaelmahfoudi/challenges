#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()

{
    int r;
    float cir;
    printf("veuillez entrez la valeur du rayon \n", r);
    scanf("%d",&r);
    cir = 2*r*3.14;
    printf("la circonference du cercle est:%.2f \n",cir);
    return 0;
}
