#include <stdio.h>
int main()
{
   int a, i, estpremier;
   printf("veuillez entrez un nombre :");
   scanf("%d",&a);
   estpremier=1;
   for(i=2; i<=a/2 ; i++)
   {if(a%i==0){
       estpremier =0 ;
       break;
       }
      
   }if(estpremier==0){
           printf("le nombre n'est pas premier.");
       
   } else
   printf("le nombre est premier. ");
   
   
      return 0;
}
