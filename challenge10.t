
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()

{
   int day, month, year;
   printf("veuillez entrez la date:\n");
   scanf("%d/%d/%d/",&day ,&month, &year);
   switch(month){
       case 1 : printf("la date est:%d-janvier-%d",day,year);
       break;
       case 2 : printf("la date est:%d-fevrier-%d",day,year);
       break;
       case 3 : printf("la date est:%d-mars-%d",day,year);
       break;
       case 4 : printf("la date est:%d-avril-%d",day,year);
       break;
       case 5 : printf("la date est:%d-mai-%d",day,year);
       break;
       case 6 : printf("la date est:%d-juin-%d",day,year);
       break;
       case 7 : printf("la date est:%d-juillet-%d",day,year);
       break;
       case 8 : printf("la date est:%d-aout-%d",day,year);
       break;
       case 9 : printf("la date est:%d-septembre-%d",day,year);
       break;
       case 10 : printf("la date est:%d-actobre-%d",day,year);
       break;
       case 11 : printf("la date est:%d-novembre-%d",day,year);
       break;
       case 12 : printf("la date est:%d-decembre-%d",day,year);
       break;
       default: printf("entrez la date une autre fois ");
       
   }

    return 0;
}

