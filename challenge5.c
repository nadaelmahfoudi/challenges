#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()

{
    int a, b, c, z, r1, r2, d;

    printf("veuillez entrez les deux abssices: \n");
    scanf("%d %d",&a, &b);
     printf("veuillez entrez les deux ordonnees: \n");
     scanf("%d %d",&c, &z);
     r1 = pow((b-a),2 );
     r2 = pow((z-c),2 ) ;
     d = sqrt(r1+r2);
     printf("la distance entre les deux points est:%d \n",d );

    return 0;
}
