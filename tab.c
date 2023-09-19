#include <stdio.h>
#include <stdlib.h>

int main()
{  int tab[3][5], i,j, t[5][3];

   for(i=0;i<3;i++){
    for(j=0;j<5;j++){
    printf("  veuillez entrez tab[%d][%d]=",i,j);
    scanf("%d",&tab[i][j]);
   }}
   for(j=0;j<5;j++){
    for(i=0;i<3;i++)
     t[j][i] = tab[i][j];
   }

   // affichage du matrice tab
   printf("tab = \n");
   for(i=0;i<3;i++){
    for(j=0;j<5;j++){
    printf(" %d  ",tab[i][j]);
    }printf("\n");}

   // affichage du matrice t
   printf("t = \n");
    for(j=0;j<5;j++){
     for(i=0;i<3;i++){
    printf("%d  ",t[i][j]);
    }printf("\n");}
   return 0;
}

