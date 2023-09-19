#include <stdio.h>
#include <stdlib.h>

int main()
{  int  i,n;
   int  k=0;
    int compteur=0;
   float  tab[20],s, M,min,max ;
  printf("combien de notes vous voullez entrez ? ");
  scanf("%d",&n);
  for(i=0 ; i<n ; i++){
    do{
        printf("entrez tab[%d] = ",i);
        scanf("%f",&tab[i]);
    }while(tab[i]<0 || tab[i]>20);
  } printf("les elements du tableaux sont : \n");
  for(i=0 ; i<n ; i++)
   printf("tab[%d] = %.2f \n", i, tab[i]);
   s = 0;
   for(i=0; i<n ; i++){
   s = s + tab[i];
   }printf("la somme des notes est : %.2f \n",s);

   M = s/n;
   printf("la moyenne  des notes est :%.2f \n",M);
   // comparaison des notes avec la moyenne !
   for(i=0;i<n;i++){
   if(tab[i]==M){
   printf("la note %f egale a la moyenne.\n",tab[i]);}
   else if(tab[i]<M){
   printf("la note  %f inferieure a la moyenne .\n",tab[i]);}
   else{
   printf("la note %f est superieure a la moyenne .\n",tab[i]);
   compteur++;
   }
   }
   printf("il y'a %d notes superieures a la moyenne \n",compteur);
   min= tab[0];

   for(int i=1;i<n;i++){
    if(min>tab[i]){
    min = tab[i];
    k=i;}
   }printf("le minimum du tableau est : tab[%d]= %f\n",k,min);
   k=0;
   max = tab[0];
   for(int i=1; i<n ;i++){
    if(max<tab[i]){
    max = tab[i];
    k=i;}
   }printf("le maximum du tableau est : tab[%d]= %f",k,max);
  return 0 ;
}

