#include <stdio.h>

int main()
{
    int tab[10] , i , min,max;
    for(i=0;i<10;i++){
    printf("tab[%d]= \n",i);
    scanf("%d", &tab[i]);
    }
    min=tab[0];
    for(i=0;i<10;i++){
    if(min>tab[i])
    min = tab[i];
    } printf("le nombre plus petit du tableau est : %d\n",min);
    max=tab[0];
    for(i=0;i<10;i++){
    if(max<tab[i])
    max=tab[i];
    }printf("le nombre plus grand du tableau est : %d\n",max);
    return 0;
}
