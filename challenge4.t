#include <stdio.h>
#include <complex.h>
#include <math.h>
int main()
{
    int a, b, c, delta;
    float x;
    float complex y, z;
    printf ("veuillez entrez les coefficients de l'equation: \n");
    scanf("%d %d %d",&a ,&b ,&c);
    delta = b*b -(4*a*c);
    if(delta == 0){
        x=( -b/(2*c));
        printf("la solution de l'equation est : %.2f",x);
    }else if (delta > 0){
        y=(-b- csqrt (delta))/(2.0 * a);
        z=(-b+ csqrt (delta))/(2.0 * a);
        printf("les deux solutions de l'equation sont :%.2f+%.2fi et  %.2f +%.2fi",creal(y),cimag(y),creal(z) ,cimag(z));
    }else {
      y= (-b- csqrt(-delta)*I) /(2.0 * a);
       z= (-b+ csqrt(-delta)*I) /(2.0 * a);
       printf("les deux solutions de l'equation sont :%.2f+%.2fi et  %.2f +%.2fi",creal(y),cimag(y),creal(z) ,cimag(z));
       
    }

    return 0;
}
