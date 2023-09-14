#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a, b, sum , sou, mult;
    int div, rest;
    printf("veuillez entrez un nombre!:\n", a);
    scanf("%d",&a);
     printf("veuillez entrez un nombre!:\n", b);
    scanf("%d", &b);
    sum = a+b ;
     printf("la somme des nombres est:%d \n",sum);
    sou = a-b;
     printf("la soustraction des nombres est :%d \n",sou);
    mult = a*b;
     printf("la multiplication des nombres est:%d \n",mult);
    div = a/b ;
     printf("le quotient de la division est:%d\n",div);

    rest = a%b ;
     printf("le reste de la division DE a%%b= est:%d\n", rest);


    return 0;
}

