#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()

{
    int a, c, d1,u;
    printf("veuillez entrez un nombre de trois chiffres");
    scanf("%d",&a);
    c = a/100;
    d1 = (a-(c*100))/10;
    u = (a - (c*100)- (d1*10)) ;
    printf("l'inverse du nombre est %d%d%d", u,d1,c);
   

    return 0;
}
