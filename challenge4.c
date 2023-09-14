#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()

{
    int a, b, c, d, sum;
    float moy;
    printf("veuillez entrez quatre nombre: \n",a,b,c,d);
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum = (a +b +c +d);
    printf("la somme des nombres est :%d \n",sum);
    moy = sum/4;
    printf("la moyenne des nombres est :%f \n",moy);
    return 0;
}
