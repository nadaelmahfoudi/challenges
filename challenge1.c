#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    char nom, prenom, sexe, Nt;
    int age;
    printf("veuillez entrez votre nom et prenom \n",nom,prenom);
    scanf("%s,%s",&nom,&prenom);
    printf("veuillez entrez votre sexe \n",sexe);
    scanf("%s",&sexe);
    printf("veuillez entrez votre Nt \n",Nt);
    scanf("%s",&Nt);
    printf("veuillez entrez votre age \n",age);
    scanf("%d",&age);

    return 0;
}
