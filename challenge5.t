#include <stdio.h>
int main()
{
   int numyear, nummois, numjour, numhour, nummin, numsec ;
   printf("veuillez entrez le nombre des annees :\n");
   scanf("%d",&numyear);
   nummois = numyear * 12 ;
   numjour = numyear * 12 * 30;
   numhour = numyear * 12 * 30 * 24 ;
   nummin = numyear * 12 * 30 * 24 * 60 ;
   numsec = numyear * 12 * 30 * 24 * 60 * 60;
   printf("le nombre des annees en mois %d \n en jour %d \n en heure %d \n en min %d \n en sec %d \n", nummois, numjour, numhour, nummin, numsec);
    return 0;
}
