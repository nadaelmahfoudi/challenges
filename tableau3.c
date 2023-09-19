#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10],i,j,p;
   printf("veuillez entrez les elements du tableau : \n");
   for(i=0;i<10;i++){
   printf("tab[%d]= ",i);
   scanf("%d",&tab[i]);
   }
   for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
        if(tab[i]<tab[j]){
        p=tab[i];
        tab[i]=tab[j];
        tab[j]=p;
        }
    }
   }
   printf("les elemens du tableau de plus petit au plus grand sont:\n");
   for(i=0;i<10;i++)
    printf("%d , ",tab[i]);
    return 0;
}

