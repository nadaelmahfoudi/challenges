#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()

{
       float C,F;

    printf("veuillez entrez la temperature en Fahrenheit!\n",F);
    scanf("%f", &F);

    C = (F - 32) / 1.8;
    printf("la temperature en degre celsius est : %f \n", C);

    if (C >= 34 && C<=40) {
        printf("il fait chaud");
    }

    else if (C >= 40 ) {
        printf("il fait tres chaud");
    } else if(C<=34 && C>=15){
        printf("il fait froid");
    } else {

     printf("il fait tres froid ");
    }




    return 0;
}

