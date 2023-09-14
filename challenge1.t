#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()

{
   int a, rest;
   printf ("veuillez entrez un nombre:\n",a);
   scanf("%d",&a);
   rest = a%2 ;
  
   
   if (rest == 0){
       printf("le nombre est pair ");
   }else{
       printf("le nombre est impair");
   }
   

    return 0;
}
